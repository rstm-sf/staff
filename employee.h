#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <cstdint>
#include <iomanip>
#include <iostream>
#include <string>

class Employee {
public:
    Employee(
        const std::string & first,
        const std::string & last,
        const std::string & post,
        double salary
    ) : first{first}, last{last}, post{post}, salary{salary} {}

    Employee() = default;
    ~Employee() = default;
    Employee(const Employee &) = default;
    Employee & operator=(const Employee &) = default;
    Employee(Employee &&) = default;
    Employee & operator=(Employee &&) = default;

    std::string get_first() const {
        return first;
    }

    std::string get_last() const {
        return last;
    }

    std::string get_post() const {
        return post;
    }

    double get_salary() const {
        return salary;
    }

    virtual void print_full_info() {
        std::cout << "================================================================================";
        std::cout << "\nFull info\n";
        std::cout << "================================================================================";
        std::cout << "\nName: " << first << " " << last << "\n";
        std::cout << "Post: " << post << "\n";
        std::cout << "Salary: " << std::put_money(salary) << "\n";
        std::cout << "================================================================================";
        std::cout << std::endl;
    }

protected:
    std::string first;
    std::string last;
    std::string post;
    double salary;
};

#endif // EMPLOYEE_H