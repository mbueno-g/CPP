
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    HumanA ha;
    HumanB hb;

    ha.name = "Human A";
    ha.attack();

    hb.name = "Human B";
    hb.setType("automatic gun");
    hb.attack();

    return (0);
}