/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:21:57 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/26 00:21:01 by minsunki         ###   ########seoul.kr  */
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
	return (0);
}