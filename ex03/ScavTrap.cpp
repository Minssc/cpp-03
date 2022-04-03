/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 22:24:16 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/03 14:52:29 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void): ClapTrap()
{
	std::cout << "Scav default constructor called" << std::endl;
	_name = "Scav Doe";
	_health = ScavTrap::defaultHealth;
	_energy = ScavTrap::defaultEnergy;
	_damage = ScavTrap::defaultDamage;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
	std::cout << "Scav string constructor called" << std::endl;
	_name = name;
	_health = ScavTrap::defaultHealth;
	_energy = ScavTrap::defaultEnergy;
	_damage = ScavTrap::defaultDamage;
}

ScavTrap::ScavTrap(const ScavTrap &a): ClapTrap()
{
	std::cout << "Scav copy constructor called" << std::endl;
	*this = a;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Scav destructor called" << std::endl;
}

const ScavTrap	&ScavTrap::operator=(const ScavTrap &a)
{
	_name = a.getName();
	_health = a.getHealth();
	_energy = a.getEnergy();
	_damage = a.getDamage();
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (!_health || !_energy)
		return ;
	_energy--;
	std::cout << "ScavTrap " << _name << " attacks " << target
	<< ", causing " << _damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << _name << " is now in gate keeper mode" << std::endl;
}
