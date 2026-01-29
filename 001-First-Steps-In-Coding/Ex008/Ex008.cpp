#include<iostream>

int main(int argc, char* argv[])
{
    int num1, num2;
    std::cin >> num1 >> num2;

    printf("%.1f lv.", num1 * 2.50 + num2 * 4);
    return 0;
}
