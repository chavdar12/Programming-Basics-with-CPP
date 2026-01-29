#include <iostream>

int main()
{
    int length, width, height;
    double percent;

    std::cin >> length >> width >> height >> percent;

    const double available_liters = length * width * height * 0.001 * (1 - percent / 100.0);

    std::cout << available_liters << '\n';

    return 0;
}
