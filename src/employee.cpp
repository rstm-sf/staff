#include <iomanip>
#include <iostream>

#include "employee.h"

Employee::Employee(
    const std::string & first,
    const std::string & last,
    const std::string & post,
    double salary
) : first{first}, last{last}, post{post}, salary{salary} {}

std::string Employee::get_first() const {
    return first;
}

std::string Employee::get_last() const {
    return last;
}

std::string Employee::get_post() const {
    return post;
}

double Employee::get_salary() const {
    return salary;
}

void Employee::print_full_info() {
    std::cout << "================================================================================";
    std::cout << "\nFull info\n";
    std::cout << "================================================================================";
    std::cout << "\nName: " << first << " " << last << "\n";
    std::cout << "Post: " << post << "\n";
    std::cout << "Salary: " << std::put_money(salary) << "\n";
    std::cout << "================================================================================";
    std::cout << std::endl;
}