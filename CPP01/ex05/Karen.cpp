
#include "Karen.hpp"

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup ";
    std::cout << "burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money.";
    std::cout << " You don’t put enough!";
    std::cout << " If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free.";
    std::cout << " I’ve been coming here for years and you just started";
    std::cout << " working here last month." << std::endl;
}

void Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
    map_t m;

    m["debug"] = &Karen::debug;
    m["info"] = &Karen::info;
    m["warning"] = &Karen::warning;
    m["error"] = &Karen::error;
    map_t::const_iterator it = m.find(level);
    if (it == m.end()) return;
    (this->*(it->second))();
    //void (Karen:: *f)(void) = m.find(level);
    //(*f)();
    //(m.f)();
}