#ifndef DEVELOPER_CPP_H
#define DEVELOPER_CPP_H

#include "developer.h"

class Developer_cpp final : public Developer {
public:
    Developer_cpp(
        const std::string & first,
        const std::string & last,
        double salary,
        const std::string & university,
        const std::string & life,
        const std::string & framework);
    Developer_cpp();

    ~Developer_cpp() = default;
    Developer_cpp(const Developer_cpp &) = default;
    Developer_cpp & operator=(const Developer_cpp &) = default;
    Developer_cpp(Developer_cpp &&) = default;
    Developer_cpp & operator=(Developer_cpp&&) = default;

    void print_full_info() override;

    std::string get_life() const;
    void set_life(const std::string & life);

    std::string get_framework() const;
    void set_framework(const std::string & framework);

private:
    std::string life;
    std::string framework;
};

#endif // DEVELOPER_CPP_H