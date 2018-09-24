#include <iostream>
#include <list>

#include <conio.h>

#include "staff.h"

std::list<Employee> generate_list_employees();

int main(int argc, char const *argv[]) {
    Staff::get_instance().set_list_employees(generate_list_employees());
    while (true) {
        char c = _getch();
        int key = static_cast<int>(c);
        if (65 <= key && key <= 90 || 97 <= key && key <= 122) {  // word key
            Staff::get_instance().print_info();
        } else if (48 <= key && key <= 57 ||
                   96 <= key && key <= 105) { // number key
            Staff::get_instance().print_salary();
        } else if (key == 43 || key == 187 || key == 107) {  // key '+'
            Staff::get_instance().print_list_staff_name();
        } else if (key == 45 || key == 189 || key == 108) { // key '-'
            Staff::get_instance().print_list_staff_name(false);
        } else if (key == 27) { // key 'esc'
            std::cout << "\nExit." << std::endl;
            break;
        }
    }
    return 0;
}

std::list<Employee> generate_list_employees() { 
    Adjuster adjuster("d", "d", 4.0, "department");
    Developer developer("e", "e", 5.0, "lang", "univer");
    Developer_cpp dev_cpp("c", "c", 3.0, "univer", "1 day", "framework");
    Economist economist("b", "b", 2.0, 10);
    Electronician electr("a", "a", 1.0, std::list<std::uint8_t>{1});

    return std::list<Employee>{adjuster, developer, dev_cpp, economist, electr};
}