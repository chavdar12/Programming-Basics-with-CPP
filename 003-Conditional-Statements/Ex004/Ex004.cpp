#include <iostream>
#include <string>

int main()
{
    std::string password;
    std::cin >> password;

    std::cout << (password == "s3cr3t!P@ssw0rd" ? "Welcome" : "Wrong password!") << '\n';
}
