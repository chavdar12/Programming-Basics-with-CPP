#include <iostream>

int main()
{
    for (int hour = 0; hour < 24; ++hour)
    {
        for (int minute = 0; minute < 60; ++minute)
        {
            std::cout << hour << ":" << (minute < 10 ? "0" : "") << minute << '\n';
        }
    }
    return 0;
}
