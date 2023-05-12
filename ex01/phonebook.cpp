#include "phonebook.hpp"

int main()
{
	PhoneBook phonebook;

	while (true)
	{
		std::string input;
		std::cout << "Please enter a command: ";
		std::cin >> input;
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			break;
	}
}