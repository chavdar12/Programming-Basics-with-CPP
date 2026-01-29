#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    double record_seconds, distance_meters, time_per_meter_seconds;
    std::cin >> record_seconds >> distance_meters >> time_per_meter_seconds;

    const double ivan_time = distance_meters * time_per_meter_seconds + std::floor(distance_meters / 15) * 12.5;

    std::cout << std::fixed << std::setprecision(2);
    if (ivan_time < record_seconds)
    {
        std::cout << "Yes, he succeeded! The new world record is " << ivan_time << " seconds." << '\n';
    }
    else
    {
        std::cout << "No, he failed! He was " << ivan_time - record_seconds << " seconds slower." << '\n';
    }

    return 0;
}
