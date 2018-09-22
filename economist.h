#ifndef ECONOMIST_H
#define ECONOMIST_H

#include "employee.h"

class Economist : public Employee {
public:
    Economist(
        const std::string & first,
        const std::string & last,
        double salary,
        uint16_t amount_firm
    ) : Employee(first, last, "Economist", salary), amount_firm{amount_firm} {}

    Economist() : Employee(), amount_firm() {
        this->post = "Economist";
    }

    ~Economist() = default;
    Economist(const Economist &) = default;
    Economist & operator=(const Economist &) = default;
    Economist(Economist &&) = default;
    Economist & operator=(Economist &&) = default;

    void print_full_info() override {
        std::cout << "================================================================================";
        std::cout << "\nFull info\n";
        std::cout << "================================================================================";
        std::cout << "\nName: " << first << " " << last << "\n";
        std::cout << "Post: " << post << "\n";
        std::cout << "Salary: " << std::put_money(salary) << "\n";
        std::cout << "Amount firm: " << amount_firm << "\n";
        std::cout << "================================================================================";
        std::cout << std::endl;
    }

    uint16_t get_amount_firm() const {
        return amount_firm;
    }

    void set_amount_firm(uint16_t amount_firm) {
        this->amount_firm = amount_firm;
    }

private:
    uint16_t amount_firm;
};

#endif // ECONOMIST_H