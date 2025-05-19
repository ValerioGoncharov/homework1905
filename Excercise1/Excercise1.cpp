#include <iostream>
#include "Math.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите первое число: ";
	int a;
	std::cin >> a;
	std::cout << "Введите второе число: ";
	int b;
	std::cin >> b;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): " << std::endl;
	int operation;
	std::cin >> operation;
	
	if (operation == 1)
	{
		std::cout << "Результат: " << MyMath::sum(a, b) << std::endl;
	}
	else if (operation == 2)
	{
		std::cout << "Результат: " << MyMath::difference(a, b) << std::endl;
	}
	else if (operation == 3)
	{
		std::cout << "Результат: " << MyMath::multiplication(a, b) << std::endl;
	}
	else if (operation == 4)
	{
		if (b != 0)
			std::cout << "Результат: " << MyMath::division(a, b) << std::endl;
		else
			std::cout << "Ошибка: деление на ноль!" << std::endl;
	}
	else if (operation == 5)
	{
		std::cout << "Результат: " << MyMath::power(a, b) << std::endl;
	}
	else
	{
		std::cout << "Ошибка: неверная операция!" << std::endl;
	}
	
}

