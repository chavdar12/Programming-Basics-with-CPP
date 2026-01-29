#include <iostream>

int main() {
    int time1, time2, time3;
    std::cin >> time1 >> time2 >> time3;

    const int total_seconds = time1 + time2 + time3;
    const int minutes = total_seconds / 60;
    const int seconds = total_seconds % 60;

    std::cout << "Total time: " << minutes << ":" << (seconds < 10 ? "0" : "") << seconds << '\n';

    return 0;
}