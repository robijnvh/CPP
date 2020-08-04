/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 11:28:12 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/08/04 12:52:36 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int     main(void)
{
    std::cout << "Game started." << std::endl;
    ScavTrap player1("player1");
    FragTrap player2("player2");
	NinjaTrap	player3("player3");
	SuperTrap	player4("player4");
	SuperTrap	player5("player5");

	// player1.takeDamage(25);
	player4.takeDamage(25);
	// player1.takeDamage(25);
	player4.takeDamage(25);
	// player1.takeDamage(25);
	player4.takeDamage(25);
	// player1.takeDamage(25);
	player4.takeDamage(25);
	// player1.takeDamage(25);
	player4.takeDamage(25);

    // std::cout << std::endl << "Round 1" << std::endl;
    // player1.meleeAttack(player2.getName());
    // player2.takeDamage(player1.getMeleeAttackDamage());

    // std::cout << std::endl << "Round 2" << std::endl;
    // player2.rangedAttack(player1.getName());
    // player1.takeDamage(player2.getRangedAttackDamage());

    // std::cout << std::endl << "Round 3 (challenge)" << std::endl;
    // player1.challengeNewcomer(player2.getName());
    
	// std::cout << std::endl << "Shoebox round" << std::endl;
	// player3.ninjaShoebox(player1);
	// player3.ninjaShoebox(player2);
	// player3.ninjaShoebox(player3);

    return (0);
}