#include <iomanip>
#include <iostream>

#include "adjuster.h"

Adjuster::Adjuster(
    const std::string & first,
    const std::string & last,
    double salary,
    const std::string & department
) : Employee(first, last, "Adjuster", salary), department{department} {}

Adjuster::Adjuster() : Employee(), department() {
    this->post = "Adjuster";
}

void Adjuster::print_full_info() {
    std::cout << "================================================================================";
    std::cout << "\nFull info\n";
    std::cout << "================================================================================";
    std::cout << "\nName: " << first << " " << last << "\n";
    std::cout << "Post: " << post << "\n";
    std::cout << "Salary: " << salary << "\n";
    std::cout << "Department: " << department << "\n";
    std::cout << "================================================================================";
    std::cout << std::endl;
}

std::string Adjuster::get_department() const {
    return department;
}

void Adjuster::set_department(const std::string & department) {
    this->department = department;
}