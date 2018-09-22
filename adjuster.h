#ifndef ADJASTER_H
#define ADJASTER_H

#include "employee.h"

class Adjuster final : public Employee {
public:
    Adjuster(
        const std::string & first,
        const std::string & last,
        double salary,
        const std::string & department
    ) : Employee(first, last, "Adjuster", salary), department{department} {}

    Adjuster() : Employee(), department() {
        this->post = "Adjuster";
    }

    ~Adjuster() = default;
    Adjuster(const Adjuster &) = default;
    Adjuster & operator=(const Adjuster &) = default;
    Adjuster(Adjuster &&) = default;
    Adjuster & operator=(Adjuster &&) = default;

    void print_full_info() override {
        std::cout << "================================================================================";
        std::cout << "\nFull info\n";
        std::cout << "================================================================================";
        std::cout << "\nName: " << first << " " << last << "\n";
        std::cout << "Post: " << post << "\n";
        std::cout << "Salary: " << std::put_money(salary) << "\n";
        std::cout << "Department: " << department << "\n";
        std::cout << "================================================================================";
        std::cout << std::endl;
    }

    std::string get_department() const {
        return department;
    }

    void set_department(const std::string & department) {
        this->department = department;
    } 

private:
    std::string department;
};

#endif // ADJASTER_H