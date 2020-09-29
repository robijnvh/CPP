/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-hou <rvan-hou@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 14:42:22 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/29 11:33:35 by rvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int     main(void)
{
    SuperTrap zero("Jack");
    FragTrap one("James");
    ScavTrap two("Joe");
    NinjaTrap three("Jimmy");
    
    zero.vaulthunter_dot_exe("Jean");
    zero.vaulthunter_dot_exe("Jean");
	std::cout << std::endl;
    zero.ninjaShoebox(one);
    zero.ninjaShoebox(two);
    zero.takeDamage(40);
    zero.takeDamage(40);
    three.ninjaShoebox(one);
    three.ninjaShoebox(two);
    three.beRepaired(50);
    three.meleeAttack("Janet");
    three.takeDamage(9);
    return 0;
}
