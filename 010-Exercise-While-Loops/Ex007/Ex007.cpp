#include <iostream>
#include <string>

int main()
{
    int width, length, height;
    std::cin >> width >> length >> height;

    const int total_space = width * length * height;
    int boxes_space = 0;
    std::string command;

    while (std::cin >> command && boxes_space <= total_space)
    {
        if (command == "Done")
        {
            std::cout << total_space - boxes_space << " Cubic meters left.\n";
            break;
        }

        const int boxes = std::stoi(command);
        boxes_space += boxes;

        if (boxes_space > total_space)
        {
            std::cout << "No more free space! You need " << boxes_space - total_space << " Cubic meters more.\n";
        }
    }

    return 0;
}
