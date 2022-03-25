/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:21:57 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/25 22:18:45 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("minsunki");
	a.attack("norminette");
	a.printStats();
	a.takeDamage(9);
	a.beRepaired(10);
	a.printStats();
	a.takeDamage(999);
	a.printStats();
	a.beRepaired(999);
	a.attack("norminette");
	return (0);
}