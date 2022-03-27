/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:21:57 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/28 00:01:06 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap s("minsunki");
	ClapTrap *cp = new ScavTrap("am i scav?");
	s.attack("norminette");
	s.guardGate();
	s.printStats();
	
	cp->attack("wow");
	delete cp;
	
	return (0);
}