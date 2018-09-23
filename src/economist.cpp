#include <iomanip>
#include <iostream>

#include "economist.h"

Economist::Economist(
    const std::string & first,
    const std::string & last,
    double salary,
    std::uint16_t amount_firm
) : Employee(first, last, "Economist", salary), amount_firm{amount_firm} {}

Economist::Economist() : Employee(), amount_firm() {
    this->post = "Economist";
}

void Economist::print_full_info() {
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

std::uint16_t Economist::get_amount_firm() const {
    return amount_firm;
}

void Economist::set_amount_firm(std::uint16_t amount_firm) {
    this->amount_firm = amount_firm;
}