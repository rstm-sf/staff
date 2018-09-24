cmake_minimum_required(VERSION 3.5)

# Set the project name
project(Test)

# try conditional compilation
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)

if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
else()
    message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(BUILD_SHARED_LIBS ON)

set(dir ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${dir}/bin")

############################################################
# Create a library
############################################################

add_library(Classes SHARED
    src/adjuster.cpp
    src/developer.cpp
    src/developer_cpp.cpp
    src/economist.cpp
    src/electronician.cpp
    src/employee.cpp
)
add_library(employee::library ALIAS Classes)

target_include_directories(Classes
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

add_library(Base SHARED
    src/staff.cpp
)
add_library(staff::library ALIAS Base)

target_include_directories(Base
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(Base
    PRIVATE
        employee::library
)

############################################################
# Create an executable
############################################################

add_executable(Test
    src/main.cpp
)

target_link_libraries(Test
    PRIVATE
        employee::library
        staff::library
)
