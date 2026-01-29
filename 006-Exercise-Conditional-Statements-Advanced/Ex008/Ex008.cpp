#include <iostream>
#include <iomanip>

int main()
{
    int exam_hour, exam_minute, arrival_hour, arrival_minute;
    std::cin >> exam_hour >> exam_minute >> arrival_hour >> arrival_minute;

    const int exam_time_in_minutes = exam_hour * 60 + exam_minute;
    const int arrival_time_in_minutes = arrival_hour * 60 + arrival_minute;
    const int time_difference = arrival_time_in_minutes - exam_time_in_minutes;

    std::string status;
    if (time_difference > 0)
    {
        status = "Late";
    }
    else if (time_difference <= 30)
    {
        status = "On time";
    }
    else
    {
        status = "Early";
    }

    std::cout << status << '\n';

    if (time_difference != 0)
    {
        const int hours = std::abs(time_difference) / 60;
        const int minutes = std::abs(time_difference) % 60;
        const std::string when = (time_difference > 0) ? "after" : "before";
        std::cout << hours << ":" << std::setw(2) << std::setfill('0') << minutes << " hours " << when << " the start"
            << '\n';
    }

    return 0;
}
