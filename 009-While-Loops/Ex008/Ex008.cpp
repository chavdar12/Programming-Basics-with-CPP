#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string name;
    std::cin >> name;

    int grade_count = 0;
    double sum_grades = 0.0;
    bool excluded = false;
    int excluded_grade = 0;

    while (grade_count < 12)
    {
        double grade;
        std::cin >> grade;

        if (grade < 4.00)
        {
            excluded = true;
            excluded_grade = grade_count + 1;
            break;
        }

        sum_grades += grade;
        grade_count++;
    }

    if (excluded)
    {
        std::cout << name << " has been excluded at " << excluded_grade << " grade" << '\n';
    }
    else
    {
        const double average_grade = sum_grades / grade_count;
        std::cout << name << " graduated. Average grade: " << std::fixed << std::setprecision(2) << average_grade <<
            '\n';
    }

    return 0;
}
