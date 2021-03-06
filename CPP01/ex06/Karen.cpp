
#include "Karen.hpp"

void Karen::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup ";
    std::cout << "burger. I just love it!" << std::endl;
    std::cout << std::endl;
}

void Karen::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money.";
    std::cout << " You don’t put enough!";
    std::cout << " If you did I would not have to ask for it!" << std::endl;
    std::cout << std::endl;
}

void Karen::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.";
    std::cout << " I’ve been coming here for years and you just started";
    std::cout << " working here last month." << std::endl;
    std::cout << std::endl;
}

void Karen::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*function[4]) (void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    int         i;

    i = 0;
    while (i < 4)
    {
        if (levels[i] == level)
            break;
        i++;
    }
    switch(i)
    {
    case 0:
		(this->*function[0]) ();
    case 1:
		(this->*function[1]) ();
    case 2:
		(this->*function[2]) ();
    case 3:
		(this->*function[3]) ();
		break;
    case 4:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
