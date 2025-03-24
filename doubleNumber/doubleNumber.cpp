#include <iostream>

int doubleNumber(int x)
{
    return x * 2;
}

int inputNumber()
{
    std::cout << "Enter any number: ";
    int num { 0 };
    std::cin >> num;

    return num;
}

int main()
{
    int userNumber { inputNumber() };
    std::cout << "Doubled " << userNumber << " is - " << doubleNumber(userNumber) << '\n';
}

