#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    int poor_grades, grade, good_grades_count = 0, poor_grades_count = 0;
    double total_grade = 0.0;
    std::string task_name, last_task;

    std::cin >> poor_grades;
    std::cin.ignore();

    while (std::getline(std::cin, task_name) && task_name != "Enough")
    {
        std::cin >> grade;
        std::cin.ignore();
        total_grade += grade;
        good_grades_count++;
        last_task = task_name;
        if (grade <= 4 && ++poor_grades_count == poor_grades)
        {
            std::cout << "You need a break, " << poor_grades << " poor grades.\n";
            return 0;
        }
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Average score: " << total_grade / good_grades_count << "\n";
    std::cout << "Number of problems: " << good_grades_count << "\n";
    std::cout << "Last problem: " << last_task << "\n";

    return 0;
}
