#include <iostream>

int main(int argc, char* argv[])
{
    int num;
    std::cin >> num;

    printf("The final price is: %.2f lv.\n", num * 7.61 - num * 7.61 * 0.18);
    printf("The discount is: %.2f lv.", num * 7.61 * 0.18);

    return 0;
}
