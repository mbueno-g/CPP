
#include "contact.hpp"
#include "phonebook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	while (1)
	{
        std::cout << "Introduce ADD, SEARCH or EXIT: ";
		std::cin >> command;
		if (command == "EXIT")
			break;
		else if (command == "ADD")
            phonebook.add_contact_phonebook();
		else if (command == "SEARCH")
			phonebook.show_phonebook();
	}
	return (0);
}