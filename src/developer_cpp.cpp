#include <iomanip>
#include <iostream>

#include "developer_cpp.h"

Developer_cpp::Developer_cpp(
    const std::string & first,
    const std::string & last,
    double salary,
    const std::string & university,
    const std::string & life,
    const std::string & framework
) : Developer(first, last, salary, language, university),
    life{life}, framework{framework} {
    this->post = "Developer C++";
    this->language = "C++";
}

Developer_cpp::Developer_cpp() : Developer(), life(), framework() {
    this->post = "Developer C++";
    this->language = "C++";
}

void Developer_cpp::print_full_info() {
    std::cout << "================================================================================";
    std::cout << "\nFull info\n";
    std::cout << "================================================================================";
    std::cout << "\nName: " << first << " " << last << "\n";
    std::cout << "Post: " << post << "\n";
    std::cout << "Salary: " << salary << "\n";
    std::cout << "Language: " << language << "\n";
    std::cout << "University: " << university << "\n";
    std::cout << "Life: " << life << "\n";
    std::cout << "Framework: " << framework << "\n";
    std::cout << "================================================================================";
    std::cout << std::endl;
}

std::string Developer_cpp::get_life() const {
    return life;
}

void Developer_cpp::set_life(const std::string & life) {
    this->life = life;
}

std::string Developer_cpp::get_framework() const {
    return framework;
}

void Developer_cpp::set_framework(const std::string & framework) {
    this->framework = framework;
}