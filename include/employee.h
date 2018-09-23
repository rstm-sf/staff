#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
public:
    Employee(
        const std::string & first,
        const std::string & last,
        const std::string & post,
        double salary);
    Employee() = default;
    ~Employee() = default;
    Employee(const Employee &) = default;
    Employee & operator=(const Employee &) = default;
    Employee(Employee &&) = default;
    Employee & operator=(Employee &&) = default;

    std::string get_first() const;
    std::string get_last() const;
    std::string get_post() const;
    double get_salary() const;

    virtual void print_full_info();

protected:
    std::string first;
    std::string last;
    std::string post;
    double salary;
};

#endif // EMPLOYEE_H