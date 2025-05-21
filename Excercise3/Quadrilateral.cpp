#include <string>
#include "Quadrilateral.h"
#include <iostream>


    Quadrilateral::Quadrilateral() {
        name = "Четырёхугольник";
        sides_count = 4;
        a = 10; b = 20; c = 30; d = 40;
        A = 50; B = 60; C = 70; D = 80;
    }

    int Quadrilateral::get_a() { return a; }
    int Quadrilateral::get_b() { return b; }
    int Quadrilateral::get_c() { return c; }
    int Quadrilateral::get_d() { return d; }
    int Quadrilateral::get_A() { return A; }
    int Quadrilateral::get_B() { return B; }
    int Quadrilateral::get_C() { return C; }
    int Quadrilateral::get_D() { return D; }
    
    void Quadrilateral::print_info() const {
        std::cout << name << ":\n";
        std::cout << "Количество сторон: " << sides_count << "\n";
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n\n";
    }
    