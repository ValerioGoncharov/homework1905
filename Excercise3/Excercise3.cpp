

#include <iostream>
#include "Triangle.h"  
#include "RightTriangle.h"  
#include "IsoscelesTriangle.h"  
#include "EquilateralTriangle.h"  
#include "Quadrilateral.h"  
#include "Rectangle.h"  
#include "Square.h"  
#include "Parallelogram.h"  
#include "Rhombus.h"  

int main() {  
setlocale(LC_ALL, "Russian");  

// Создаю все фигуры по очереди  
Triangle triangle;  
RightTriangle right_triangle;  
IsoscelesTriangle isosceles_triangle;  
EquilateralTriangle equilateral_triangle;  

Quadrilateral quadrilateral;  
Rectangle rectangle;  
Square square;  
Parallelogram parallelogram;  
Rhombus rhombus;  

// Вывожу информацию о каждой фигуре  
triangle.print_info();  
right_triangle.print_info();  
isosceles_triangle.print_info();  
equilateral_triangle.print_info();  

quadrilateral.print_info();  
rectangle.print_info();  
square.print_info();  
parallelogram.print_info();  
rhombus.print_info();  

return 0;  
}