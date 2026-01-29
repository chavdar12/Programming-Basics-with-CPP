#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <numeric>

int main()
{
    int jurors;
    std::cin >> jurors;
    std::vector<double> grades(jurors);

    double total_average = 0.0;

    for (int i = 0; i < jurors; ++i)
    {
        std::string presentation_name;
        std::getline(std::cin >> std::ws, presentation_name);

        for (double& grade : grades)
        {
            std::cin >> grade;
        }

        const double presentation_average = std::accumulate(grades.begin(), grades.end(), 0.0) / jurors;
        total_average += presentation_average;

        std::cout << presentation_name << " - " << std::fixed << std::setprecision(2) << presentation_average << "." <<
            '\n';
    }

    std::cout << "Student's final assessment is " << std::fixed << std::setprecision(2) << total_average / jurors << "."
        << '\n';

    return 0;
}
