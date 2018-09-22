#ifndef ELECTRONINCIAN_H
#define ELECTRONINCIAN_H

#include <list>
#include <map>

#include "employee.h"

using map_law = std::map<uint8_t, std::string>;

class Electronincian final : public Employee {
public:
    Electronincian(
        const std::string & first,
        const std::string & last,
        double salary,
        const std::list<uint8_t> & known_ohm_law
    ) : Employee(first, last, "Electronincian", salary),
        department{department}, known_ohm_law{known_ohm_law} {}

    Electronincian() : Employee(), department(), known_ohm_law() {
        this->post = "Electronincian";
    }

    ~Electronincian() = default;
    Electronincian(const Electronincian &) = default;
    Electronincian & operator=(const Electronincian &) = default;
    Electronincian(Electronincian &&) = default;
    Electronincian & operator=(Electronincian &&) = default;

    void print_full_info() override {
        std::cout << "================================================================================";
        std::cout << "\nFull info\n";
        std::cout << "================================================================================";
        std::cout << "\nName: " << first << " " << last << "\n";
        std::cout << "Post: " << post << "\n";
        std::cout << "Salary: " << std::put_money(salary) << "\n";
        std::cout << "Department: " << department << "\n";
        std::cout << "Known number ohm's law: " << known_ohm_law.size() << "\n";
        std::cout << "================================================================================";
        std::cout << std::endl;
    }

    std::string get_department() const {
        return department;
    }

    void set_department(const std::string & department) {
        this->department = department;
    }

    std::list<uint8_t> get_known_ohm_law() const {
        return known_ohm_law;
    }

    void set_known_ohm_law(const std::list<uint8_t> & known_ohm_law) {
        this->known_ohm_law = known_ohm_law;
    }

private:
    static const map_law ohm_law;

    std::string department;
    std::list<uint8_t> known_ohm_law;
};

#endif // ELECTRONINCIAN_H