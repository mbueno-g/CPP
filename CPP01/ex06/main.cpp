
#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen k;
    std::string level;

    if (argc != 2)
    {
        std::cerr << "Incorrect number of arguments" << std::endl;
        return (1);
    }
    level = argv[1];
    k.complain(level);
    return (0);
}