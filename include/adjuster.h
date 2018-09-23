#ifndef ADJASTER_H
#define ADJASTER_H

#include "employee.h"

class Adjuster final : public Employee {
public:
    Adjuster(
        const std::string & first,
        const std::string & last,
        double salary,
        const std::string & department);
    Adjuster();

    ~Adjuster() = default;
    Adjuster(const Adjuster &) = default;
    Adjuster & operator=(const Adjuster &) = default;
    Adjuster(Adjuster &&) = default;
    Adjuster & operator=(Adjuster &&) = default;

    void print_full_info() override;

    std::string get_department() const;
    void set_department(const std::string & department);

private:
    std::string department;
};

#endif // ADJASTER_H