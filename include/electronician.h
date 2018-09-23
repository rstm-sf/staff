#ifndef ELECTRONICIAN_H
#define ELECTRONICIAN_H

#include <list>
#include <map>

#include "employee.h"

using map_law = std::map<std::uint8_t, std::string>;

class Electronician final : public Employee {
public:
    Electronician(
        const std::string & first,
        const std::string & last,
        double salary,
        const std::list<std::uint8_t> & known_ohm_law);
    Electronician();

    ~Electronician() = default;
    Electronician(const Electronician &) = default;
    Electronician & operator=(const Electronician &) = default;
    Electronician(Electronician &&) = default;
    Electronician & operator=(Electronician &&) = default;

    void print_full_info() override;

    std::string get_department() const;
    void set_department(const std::string & department);

    std::list<std::uint8_t> get_known_ohm_law() const;
    void set_known_ohm_law(const std::list<std::uint8_t> & known_ohm_law);

private:
    static const map_law ohm_law;

    std::string department;
    std::list<std::uint8_t> known_ohm_law;
};

#endif // ELECTRONICIAN_H