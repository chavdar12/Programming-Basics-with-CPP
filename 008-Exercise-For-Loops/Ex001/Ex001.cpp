#include <iostream>

int main()
{
    for (int i = 1; i <= 1000; ++i)
    {
        if (i % 10 == 7)
        {
            std::cout << i << " ";
        }
    }
    return 0;
}
