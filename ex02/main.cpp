/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:21:57 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/03 15:09:21 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ScavTrap s;
	ClapTrap *cp = new ScavTrap;
	s.attack("norminette");
	s.guardGate();
	s.printStats();
	
	cp->attack("wow");
	delete cp;

	cp = new FragTrap;
	cp->attack("hi im clap");
	delete cp;

	FragTrap f("minsunki");
	f.highFivesGuys();
	f.attack("moulinette");
	
	return (0);
}