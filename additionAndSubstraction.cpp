#include <iostream>


 // Эта функция просит пользователя ввести число с клавиатуры и возвращает его

int getValueFromUser()
{
    std::cout << "Enter any number: ";
    int input{ 0 };
    std::cin >> input;

    return input;
}

 // эта программа выдаёт результат сложения и вычитания двух чисел

int main()
{
    int firstNum    { getValueFromUser()};
    int secondNum   { getValueFromUser() };


    std::cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum << '\n';

    std::cout << firstNum << " - " << secondNum << " = " << firstNum - secondNum << '\n';

    return 0;
}


