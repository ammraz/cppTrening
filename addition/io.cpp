#include "io.h"
#include <iostream>

// ������ �� ����� ����� � ��� �������
int readNumber()
{
    std::cout << "Enter any number: ";
    int num{ 0 };
    std::cin >> num;

    return num;
}

// ����� �� ������� ����� ���� �����
void writeAnswer(int sum)
{
    std::cout << "Amount is - " << sum << '\n';
}