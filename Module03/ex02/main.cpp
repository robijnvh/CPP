/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 11:28:12 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/10/02 11:48:07 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
    std::cout << "Game started." << std::endl;
    ScavTrap player1("player1");
    FragTrap player2("player2");

    std::cout << std::endl << "Round 1" << std::endl;
    player1.meleeAttack(player2.getName());
    player2.takeDamage(player1.getMeleeAttackDamage());

    std::cout << std::endl << "Round 2" << std::endl;
    player2.rangedAttack(player1.getName());
    player1.takeDamage(player2.getRangedAttackDamage());

    std::cout << std::endl << "Round 3 (challenge)" << std::endl;
    player1.challengeNewcomer(player2.getName());
    std::cout << std::endl << "Game ended." << std::endl;
    return (0);
}
