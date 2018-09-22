#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "employee.h"

class Developer : public Employee {
public:
    Developer(
        const std::string & first,
        const std::string & last,
        double salary,
        const std::string & language,
        const std::string & university
    ) : Employee(first, last, "Developer", salary),
        language{language}, university{university} {}

    Developer() : Employee(), language(), university() {
        this->post = "Developer";
    }

    ~Developer() = default;
    Developer(const Developer &) = default;
    Developer & operator=(const Developer &) = default;
    Developer(Developer &&) = default;
    Developer & operator=(Developer &&) = default;

    void print_full_info() override {
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

    std::string get_language() const {
        return language;
    }

    void set_language(const std::string & language) {
        this->language = language;
    }

    std::string get_university() const {
        return university;
    }

    void set_university(const std::string & university) {
        this->university = university;
    }

protected:
    std::string language;
    std::string university;
};

#endif // DEVELOPER_H