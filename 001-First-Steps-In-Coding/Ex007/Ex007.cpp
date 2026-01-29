#include <iostream>

int main(int argc, char* argv[])
{
    std::string name;
    int count_projects;

    std::cin >> name >> count_projects;

    printf("The architect %s will need %.2d hours to complete %d project/s.",name.c_str(), count_projects * 3, count_projects);
    return 0;
}
