#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include <iostream>
#include <string>
#include "contact.hpp"

class PhoneBook
{
	private:
			Contact contact[8];
			int	index;
			int	recorded;

			void	print_str(std::string str)
			{
				for (size_t i = str.size(); i < 10; i++)
					std::cout << " ";
				if (str.size() <= 10)
					std::cout << str;
				else
					std::cout << str.substr(0, 9) << ".";
			}
	public:
			PhoneBook(void)
			{
				index = 0;
				recorded = 0;
			}

			void add()
			{
				std::cout << "First name: ";
				std::cin >> contact[index].first_name;
				std::cout << "Last name: ";
				std::cin >> contact[index].last_name;
				std::cout << "Nickname: ";
				std::cin >> contact[index].nickname;
				std::cout << "Phone number: ";
				std::cin >> contact[index].phone_number;
				std::cout << "Darkest secret: ";
				std::cin >> contact[index].darkest_secret;
				index = (index + 1) % 8;
				recorded += (recorded < 8);
			}

			void search()
			{
				for (int i = 0; i < recorded; i++)
				{
					print_str(std::to_string(i + 1));
					std::cout << "|";
					print_str(contact[i].first_name);
					std::cout << "|";
					print_str(contact[i].last_name);
					std::cout << "|";
					print_str(contact[i].nickname);
					std::cout << std::endl;
				}
				std::cout << "Contact index: ";
				std::string input;
				std::cin >> input;
				if (std::stoi(input) > 0 && std::stoi(input) <= recorded)
				{
					std::cout << "First name: " << contact[std::stoi(input) - 1].first_name << std::endl;
					std::cout << "Last name: " << contact[std::stoi(input) - 1].last_name << std::endl;
					std::cout << "Nickname: " << contact[std::stoi(input) - 1].nickname << std::endl;
					std::cout << "Phone number: " << contact[std::stoi(input) - 1].phone_number << std::endl;
					std::cout << "Darkest secret: " << contact[std::stoi(input) - 1].darkest_secret << std::endl;
				}
				else
					std::cout << "No contact exists at ths index" << std::endl;
			}
};
#endif