#include <iomanip>
#include <iostream>

#include "staff.h"

Staff & Staff::get_instance() {
    static Staff instance;
    return instance;
}

void Staff::set_list_employees(const std::list<Employee> & list_employees) {
    this->list_employees = list_employees;
}

void Staff::print_info() {
    for(auto & p: list_employees)
        p.print_full_info();
}

void Staff::print_salary() {
    for(auto & p: list_employees)
        std::cout << std::put_money(p.get_salary()) << std::endl;
}

void Staff::print_list_staff_name(bool is_ascending) {
    std::list<Name_Salary> order;

    for(const auto & p: list_employees)
        order.push_back(Name_Salary(
            p.get_first() + " " + p.get_last(), p.get_salary()));

    if (is_ascending) {
        order.sort([](const Name_Salary & l, const Name_Salary & r) {
            return l.salary < r.salary;
        });
    } else {
        order.sort([](const Name_Salary & l, const Name_Salary & r) {
            return l.salary > r.salary;
        });
    }        

    for(const auto & p: order)
        std::cout << p.name << std::endl;
}