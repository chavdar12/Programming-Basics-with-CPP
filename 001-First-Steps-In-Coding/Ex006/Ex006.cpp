#include<iostream>

int main(int argc, char* argv[])
{
    std::string first_name, last_name, town;
    int age;
    std::cin >> first_name >> last_name >> age >> town;

    printf("You are %s %s, a %d-years old person from %s.", first_name.c_str(), last_name.c_str(), age, town.c_str());
    return 0;
}
