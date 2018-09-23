#ifndef ECONOMIST_H
#define ECONOMIST_H

#include "employee.h"

class Economist : public Employee {
public:
    Economist(
        const std::string & first,
        const std::string & last,
        double salary,
        std::uint16_t amount_firm);
    Economist();

    ~Economist() = default;
    Economist(const Economist &) = default;
    Economist & operator=(const Economist &) = default;
    Economist(Economist &&) = default;
    Economist & operator=(Economist &&) = default;

    void print_full_info() override;

    std::uint16_t get_amount_firm() const;
    void set_amount_firm(std::uint16_t amount_firm);

private:
    std::uint16_t amount_firm;
};

#endif // ECONOMIST_H