#include <iostream>

int main() {
    int hour, minutes;
    std::cin >> hour >> minutes;

    const int total_minutes = hour * 60 + minutes + 15;
    const int new_hour = total_minutes / 60 % 24;
    const int new_minutes = total_minutes % 60;

    std::cout << "New time: " 
              << (new_hour < 10 ? "0" : "") << new_hour << ":" 
              << (new_minutes < 10 ? "0" : "") << new_minutes << '\n';

    return 0;
}