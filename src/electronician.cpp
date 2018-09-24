#include <iomanip>
#include <iostream>

#include "electronician.h"

Electronician::Electronician(
    const std::string & first,
    const std::string & last,
    double salary,
    const std::list<std::uint8_t> & known_ohm_law
) : Employee(first, last, "Electronician", salary),
    department{department}, known_ohm_law{known_ohm_law} {}

Electronician::Electronician() : Employee(), department(), known_ohm_law() {
    this->post = "Electronician";
}

void Electronician::print_full_info() {
    std::cout << "================================================================================";
    std::cout << "\nFull info\n";
    std::cout << "================================================================================";
    std::cout << "\nName: " << first << " " << last << "\n";
    std::cout << "Post: " << post << "\n";
    std::cout << "Salary: " << salary << "\n";
    std::cout << "Department: " << department << "\n";
    std::cout << "Known number ohm's law: " << known_ohm_law.size() << "\n";
    std::cout << "================================================================================";
    std::cout << std::endl;
}

std::string Electronician::get_department() const {
    return department;
}

void Electronician::set_department(const std::string & department) {
    this->department = department;
}

std::list<std::uint8_t> Electronician::get_known_ohm_law() const {
    return known_ohm_law;
}

void Electronician::set_known_ohm_law(
    const std::list<std::uint8_t> & known_ohm_law) {
    this->known_ohm_law = known_ohm_law;
}

const map_law Electronician::ohm_law{std::make_pair(1, "Number One")};

std::string Electronician::get_ohm_law_description(std::int8_t number) {
    return ohm_law.at(number);
}