﻿#include <iostream>
#include <string>
#include <Windows.h>
#include "Counter.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string answer;
    std::cout << "Вы хотите указать начальное значение для счётчика? Введите да или нет: \n";
    std::cin >> answer;

    Counter counter;

    if (answer == "да")
    {
        int initialValue;
        std::cout << "Введите начальное значение счётчика: \n";
        std::cin >> initialValue;
        counter = Counter(initialValue);
    }
    else
    {
        std::cout << "Используется значаение по умолчанию (1): \n";
    }
    while (true)
    {
        char command;

        std::cout << "Введите команду ('+', '-', '=' или 'x'): \n";
        std::cin >> command;

        if (command == '+')
        {
            counter.increment();
        }
        else if (command == '-')
        {
            counter.decrement();
        }
        else if (command == '=')
        {
            std::cout << counter.get_value() << std::endl;
        }
        else if (command == 'x')
        {
            std::cout << "До свидания!" << std::endl;
            break;
        }
        else
        {
            std::cout << "Неизвестная команда. Повторите ввод.\n";
        }
    }
}

