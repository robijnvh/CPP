/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 11:28:12 by robijnvanho   #+#    #+#                 */
/*   Updated: 2020/08/03 14:47:13 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int     main(void)
{
    std::cout << "Game started." << std::endl;
    FragTrap player1("player1");
    FragTrap player2("player2");

    std::cout << std::endl << "Round 1" << std::endl;
    player1.meleeAttack(player2.getName());
    player2.takeDamage(player1.getMeleeAttackDamage());

    std::cout << std::endl << "Round 2" << std::endl;
    player2.rangedAttack(player1.getName());
    player1.takeDamage(player2.getRangedAttackDamage());

    std::cout << std::endl << "Round 3 (random)" << std::endl;
    player1.vaulthunter_dot_exe(player2.getName());
    player2.takeDamage(player1.getVaultHunter_dot_exeDamage());
    
    return (0);
}
