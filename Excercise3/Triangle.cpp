#include "Triangle.h"
#include <string>
#include <iostream>

Triangle::Triangle() 
{
    name = "�����������";
    sides_count = 3;
    a = 10; b = 20; c = 30;
    A = 50; B = 60; C = 70;
}

int Triangle::get_a() { return a; }
int Triangle::get_b() { return b; }
int Triangle::get_c() { return c; }
int Triangle::get_A() { return A; }
int Triangle::get_B() { return B; }
int Triangle::get_C() { return C; }

void Triangle::print_info() const 
{
    std::cout << name << ":\n";
    std::cout << "���������� ������: " << sides_count << "\n";
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << "\n";
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << "\n\n";
}

