/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 22:24:16 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/28 00:04:25 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "Frag default constructor called" << std::endl;
	_name = "Frag Doe";
	_health = 100;
	_energy = 50;
	_damage = 20;
}

FragTrap::FragTrap(const std::string &name): ClapTrap()
{
	std::cout << "Frag string constructor called" << std::endl;
	_name = name;
	_health = 100;
	_energy = 50;
	_damage = 20;
}

FragTrap::FragTrap(const FragTrap &a): ClapTrap()
{
	std::cout << "Frag copy constructor called" << std::endl;
	*this = a;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Frag destructor called" << std::endl;
}

const FragTrap	&FragTrap::operator=(const FragTrap &a)
{
	_name = a.getName();
	_health = a.getHealth();
	_energy = a.getEnergy();
	_damage = a.getDamage();
	return (*this);
}


void	FragTrap::highFivesGuys(void) const
{
	std::cout << "HI5!" << std::endl;
}