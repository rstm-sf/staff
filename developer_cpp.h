#ifndef DEVELOPER_CPP_H
#define DEVELOPER_CPP_H

#include "developer.h"

class Developer_cpp final : public Developer {
public:
    Developer_cpp(
        const std::string & first,
        const std::string & last,
        double salary,
        const std::string & language,
        const std::string & university,
        const std::string & life,
        const std::string & framework
    ) : Developer(first, last, salary, language, university),
        life{life}, framework{framework} {
        this->post = "Developer C++";
    }

    Developer_cpp() : Developer(), life(), framework() {
        this->post = "Developer C++";
    }

    ~Developer_cpp() = default;
    Developer_cpp(const Developer_cpp &) = default;
    Developer_cpp & operator=(const Developer_cpp &) = default;
    Developer_cpp(Developer_cpp &&) = default;
    Developer_cpp & operator=(Developer_cpp&&) = default;

    void print_full_info() override {
        std::cout << "================================================================================";
        std::cout << "\nFull info\n";
        std::cout << "================================================================================";
        std::cout << "\nName: " << first << " " << last << "\n";
        std::cout << "Post: " << post << "\n";
        std::cout << "Salary: " << std::put_money(salary) << "\n";
        std::cout << "Language: " << language << "\n";
        std::cout << "University: " << university << "\n";
        std::cout << "Life: " << life << "\n";
        std::cout << "Framework: " << framework << "\n";
        std::cout << "================================================================================";
        std::cout << std::endl;
    }

    std::string get_life() const {
        return life;
    }

    void set_life(const std::string & life) {
        this->life = life;
    }

    std::string get_framework() const {
        return framework;
    }

    void set_framework(const std::string & framework) {
        this->framework = framework;
    }

private:
    std::string life;
    std::string framework;
};

#endif // DEVELOPER_CPP_H