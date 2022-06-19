
#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen k;

    if (argc != 2)
    {
        std::cerr << "Incorrect number of arguments" << std::endl;
        return (1);
    }
    k.complain(argv[1]);
}
