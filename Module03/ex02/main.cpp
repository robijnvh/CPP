/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: robijnvanhouts <robijnvanhouts@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 11:28:12 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/08/01 18:19:09 by robijnvanho   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
    std::cout << "Game started." << std::endl;
    ScavTrap player1("player1");
    ScavTrap player2("player2");

    std::cout << std::endl << "Round 1" << std::endl;
    player1.meleeAttack(player2.getName());
    player2.takeDamage(player1.getMeleeAttackDamage());

    std::cout << std::endl << "Round 2" << std::endl;
    player2.rangedAttack(player1.getName());
    player1.takeDamage(player2.getRangedAttackDamage());

    std::cout << std::endl << "Round 3 (challenge)" << std::endl;
    player1.challengeNewcomer(player2.getName());
    
    return (0);
}