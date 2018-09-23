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
        const std::string & university);
    Developer();

    ~Developer() = default;
    Developer(const Developer &) = default;
    Developer & operator=(const Developer &) = default;
    Developer(Developer &&) = default;
    Developer & operator=(Developer &&) = default;

    void print_full_info() override;

    std::string get_language() const;
    void set_language(const std::string & language);

    std::string get_university() const;
    void set_university(const std::string & university);

protected:
    std::string language;
    std::string university;
};

#endif // DEVELOPER_H