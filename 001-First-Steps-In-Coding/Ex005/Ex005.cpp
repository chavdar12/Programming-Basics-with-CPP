#include<iostream>

int main(int argc, char* argv[])
{
    std::string name;
    std::cin >> name;

    printf("Hello, %s!", name.c_str());

    return 0;
}
