#include <iostream>

int main()
{
    int floors, rooms;
    std::cin >> floors >> rooms;

    for (int floor = floors; floor >= 1; --floor)
    {
        for (int room = 0; room < rooms; ++room)
        {
            std::string room_type = (floor == floors) ? "L" : (floor % 2 == 0) ? "O" : "A";
            std::cout << (room == 0 ? "" : " ") << room_type << floor << room;
        }
        std::cout << '\n';
    }

    return 0;
}
