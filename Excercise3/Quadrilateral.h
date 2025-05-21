#pragma once
#include "Figure.h"
#include <string>

class Quadrilateral:public Figure {
protected:
    int a, b, c, d;
    int A, B, C, D;

public:
    Quadrilateral();

    int get_a();
    int get_b();
    int get_c();
    int get_d();
    int get_A();
    int get_B();
    int get_C();
    int get_D();
    
    void print_info() const override;
};

