#include <iostream>
#include <list>

#include "staff.h"

int main(int argc, char const *argv[]) {
    Adjuster a;
    std::cout << a.get_first() << std::endl;

    Adjuster b("a", "b", 5.5, "e");
    std::cout << b.get_first() << std::endl;

    b.print_full_info();

    Developer_cpp c;
    std::cout << c.get_first() << std::endl;

    c.print_full_info();

    Adjuster d(b);
    d.print_full_info();

    Developer_cpp e("a", "b", 5.5, "c", "d", "e", "f");
    e.print_full_info();

    std::list<Employee> list_employees;
    list_employees.push_back(d);
    list_employees.push_back(a);

    for(auto & p : list_employees) {
        p.print_full_info();
    }

    Staff::get_instance().set_list_employees(list_employees);
    Staff::get_instance().print_info();
    Staff::get_instance().print_salary();

    list_employees.push_back(Adjuster("a", "c", 3.5, "e"));
    Staff::get_instance().set_list_employees(list_employees);
    Staff::get_instance().print_list_staff_name(false);

    return 0;
}