#include <fstream>
#include <iostream>

int main()
{
    std::ifstream ifs("input.txt");
    std::string line;
    while (std::getline(ifs, line))
    {
        std::cout << line << std::endl;
    }
    return 0;
}