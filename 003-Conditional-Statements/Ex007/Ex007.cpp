#include <iostream>
#include <iomanip>
#define M_PI 3.14159265358979323846

int main()
{
    std::string figure;
    std::cin >> figure;

    double area = 0.0;
    double height;

    if (figure == "square")
    {
        double side;
        std::cin >> side;
        area = side * side;
    }
    else if (figure == "rectangle")
    {
        double width;
        std::cin >> width >> height;
        area = width * height;
    }
    else if (figure == "circle")
    {
        double radius;
        std::cin >> radius;
        area = M_PI * radius * radius;
    }
    else if (figure == "triangle")
    {
        double base;
        std::cin >> base >> height;
        area = 0.5 * base * height;
    }

    std::cout << "Area: " << std::fixed << std::setprecision(3) << area << '\n';
}
