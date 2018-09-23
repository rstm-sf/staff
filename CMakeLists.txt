cmake_minimum_required(VERSION 3.5)

# Set the project name
project(Test)

# try conditional compilation
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)

if(COMPILER_SUPPORTS_CXX11)#
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)#
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
    message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

############################################################
# Create a library
############################################################

#Generate the shared library from the library sources
add_library(employee_lib SHARED
    src/adjuster.cpp
    src/developer.cpp
    src/developer_cpp.cpp
    src/economist.cpp
    src/electronician.cpp
    src/employee.cpp
)
add_library(employee::library ALIAS employee_lib)

target_include_directories(employee_lib
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

add_library(staff_lib SHARED
    src/staff.cpp
)
add_library(staff::library ALIAS staff_lib)

target_include_directories(staff_lib
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(Test
    src/main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries(Test
    PRIVATE 
        employee::library
        staff::library
)

