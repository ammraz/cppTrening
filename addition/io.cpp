#include "io.h"
#include <iostream>

// Запрос от юзера числа и его возврат
int readNumber()
{
    std::cout << "Enter any number: ";
    int num{ 0 };
    std::cin >> num;

    return num;
}

// Вывод на консоль суммы двух чисел
void writeAnswer(int sum)
{
    std::cout << "Amount is - " << sum << '\n';
}