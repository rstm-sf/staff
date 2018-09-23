#include <iomanip>
#include <iostream>

#include "developer.h"

Developer::Developer(
    const std::string & first,
    const std::string & last,
    double salary,
    const std::string & language,
    const std::string & university
) : Employee(first, last, "Developer", salary),
    language{language}, university{university} {}

Developer::Developer() : Employee(), language(), university() {
    this->post = "Developer";
}

void Developer::print_full_info() {
    std::cout << "================================================================================";
    std::cout << "\nFull info\n";
    std::cout << "================================================================================";
    std::cout << "\nName: " << first << " " << last << "\n";
    std::cout << "Post: " << post << "\n";
    std::cout << "Salary: " << std::put_money(salary) << "\n";
    std::cout << "Language: " << language << "\n";
    std::cout << "University: " << university << "\n";
    std::cout << "================================================================================";
    std::cout << std::endl;
}

std::string Developer::get_language() const {
    return language;
}

void Developer::set_language(const std::string & language) {
    this->language = language;
}

std::string Developer::get_university() const {
    return university;
}

void Developer::set_university(const std::string & university) {
    this->university = university;
}