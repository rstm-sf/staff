#ifndef STAFF_H
#define STAFF_H

#include "adjuster.h"
#include "developer.h"
#include "developer_cpp.h"
#include "economist.h"
#include "electronician.h"
#include "employee.h"

struct Name_Salary {
    std::string name;
    double salary;
     
    Name_Salary(std::string name, double salary) :
        salary{salary}, name{name} {}
};

class Staff {
public:
    static Staff & get_instance();

    Staff(Staff const &) = delete;
    Staff(Staff &&) = delete;
    Staff & operator=(Staff const &) = delete;
    Staff & operator=(Staff &&) = delete;

    void set_list_employees(const std::list<Employee> & list_employees);

    void print_info();
    void print_salary();
    void print_list_staff_name(bool is_ascending = true);

private:
    Staff() = default;
    ~Staff() = default;

    std::list<Employee> list_employees;
};

#endif // STAFF_H