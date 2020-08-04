/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 09:41:47 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/08/03 16:07:42 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact(){};

Contact::~Contact(){};

void    Contact::add_data(void)
{
	std::cout << "Please write contact's first name> "; std::getline(std::cin, data[0]);
	std::cout << "Last name> "; std::getline(std::cin, data[1]);
	std::cout << "Nickname> "; std::getline(std::cin, data[2]);
	std::cout << "Login> "; std::getline(std::cin, data[3]);
	std::cout << "Postal address> "; std::getline(std::cin, data[4]);
	std::cout << "Email address> "; std::getline(std::cin, data[5]);
	std::cout << "Phone number> "; std::getline(std::cin, data[6]);
	std::cout << "Birthday> "; std::getline(std::cin, data[7]);
	std::cout << "Favorite meal> "; std::getline(std::cin, data[8]);
	std::cout << "Underwear color> "; std::getline(std::cin, data[9]);
	std::cout << "Darkest secret> "; std::getline(std::cin, data[10]);
}

void	Contact::print_this(void)
{	
	std::cout << "First name: " << data[0] << "\n";
	std::cout << "Last name: " << data[1] << "\n";
	std::cout << "Nickname: " << data[2] << "\n";
	std::cout << "Login: " << data[3] << "\n";
	std::cout << "Postal Address: " << data[4] << "\n";
	std::cout << "Email Address: " << data[5] << "\n";
	std::cout << "Phone number: " << data[6] << "\n";
	std::cout << "Birthday: " << data[7] << "\n";
	std::cout << "Favorite Meal: " << data[8] << "\n";
	std::cout << "Underwear color: " << data[9] << "\n";
	std::cout << "Darkest Secret: " << data[10] << "\n";
}

void	Contact::table(void)
{
	for (int i = 0; i < 3; ++i)
	{
		if (data[i].size() < 11){
			for (int k = 0; data[i].size() + k < 10; ++k)
				std::cout << " ";
			std::cout << data[i];
		}
		else {
			for (int k = 0; k < 9; ++k)
				std::cout << data[i][k];				
			std::cout << ".";
		}
		if (i < 2)
			std::cout << "|";
	}
	std::cout << "\n";
}


int     main(void)
{
	Contact new_contact[8];
	int amount = 0;
	int index;
	std::string cmd;
	while (1)
	{
		std::cout << "ADD, SEARCH or EXIT?> "; std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			if (amount == 8)
				std::cout << "Contact list is full... \n";
			else
			{
		    	new_contact[amount].add_data();
				++amount;
			}
		}
		if (cmd == "SEARCH")
		{
			if (amount == 0)
				std::cout << "Phonebook is empty... \n"; 
			else {
				std::cout << "     Index|" << "First name|"<< " Last name|" << "  Nickname\n";				
				for (int tab = 0; tab < amount; ++tab){
					std::cout << "         " << tab + 1 << "|";
					new_contact[tab].table();
				}
				std::cout << "Who's details would you like to see? "; std::cin >> index;
				std::cin.ignore();
				if (index - 1 >= 0 && index - 1 < amount)
					new_contact[index - 1].print_this();
				else
					std::cout << "No details found... \n";	
			}
		}
		if (cmd ==  "EXIT")
			exit(0);
	}
	return (0); 
}
