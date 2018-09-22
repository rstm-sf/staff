#ifndef STAFF_H
#define STAFF_H

#include <list>

#include "employee.h"

class Staff {
public:
    static Staff & get_instance() {
        static Staff instance;
        return instance;
    }

    Staff(Staff const &) = delete;
    Staff(Staff &&) = delete;
    Staff & operator=(Staff const &) = delete;
    Staff & operator=(Staff &&) = delete;

    void set_list_employees(const std::list<Employee> & list_employees) {
        this->list_employees = list_employees;
    }

    void print_full_info() {
        for(auto & p: list_employees)
            p.print_full_info();
        return;
    }

    void print_salary() {
        for(auto & p: list_employees)
            std::cout << std::put_money(p.get_salary()) << std::endl;
        return;
    }

    void print_list_staff_name(bool is_ascending = true) {
        std::list<std::pair<std::string, double>> names;

        for(auto & p: list_employees)
            names.push_back(std::make_pair(
                p.get_first() + " " + p.get_last(), p.get_salary()));

        if(is_ascending) {

        } else {

        }
        return;
    }

private:
    Staff() = default;
    ~Staff() = default;

    std::list<Employee> list_employees;
};

#endif // STAFF_H