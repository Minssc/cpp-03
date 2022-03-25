/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:22:39 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/26 01:41:08 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Diamond default constructor called" << std::endl;
	_name = "Diamond Doe";
	_health = FragTrap::defaultHealth;
	_energy = ScavTrap::defaultEnergy;
	_damage = FragTrap::defaultDamage;
}

DiamondTrap::DiamondTrap(const std::string &name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << "Diamond string constructor called" << std::endl;
	_name = name;
	_health = FragTrap::defaultHealth;
	_energy = ScavTrap::defaultEnergy;
	_damage = FragTrap::defaultDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &a)
	: ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Diamond copy constructor called" << std::endl;
	*this = a;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Diamond destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &a)
{
	_name = a.getName();
	ClapTrap::_name = _name + "_clap_name";
	_health = a.getHealth();
	_energy = a.getEnergy();
	_damage = a.getDamage();
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	if (!_health || !_energy)
		return ;
	_energy--;
	std::cout << "DiamondTrap " << _name << " attacks " << target
	<< ", causing " << _damage << " points of damage!" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "WHOAMI?" << std::endl;
	std::cout << "DiamondClap name: " << _name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}

// void	ClapTrap::takeDamage(unsigned int amount)
// {
// 	if (amount > _health)
// 	{
// 		_health = 0;
// 		return ;
// 	}
// 	_health -= amount;
// }

// void	ClapTrap::beRepaired(unsigned int amount)
// {
// 	if (!_health || !_energy)
// 		return ;
// 	_energy--;
// 	if ((std::numeric_limits<unsigned int>::max() - _health) < amount)
// 	{
// 		_health = std::numeric_limits<unsigned int>::max();
// 		return ;
// 	}
// 	_health += amount;
// }

// void	ClapTrap::printStats(void)
// {
// 	std::cout << "Stats of " << _name << ": hp = " << _health
// 	<< ", energy = " << _energy << ", damage = " << _damage << std::endl;
// }

// std::string		ClapTrap::getName(void) const
// {
// 	return (_name);
// }

// unsigned int	ClapTrap::getHealth(void) const
// {
// 	return (_health);
// }

// unsigned int	ClapTrap::getEnergy(void) const
// {
// 	return (_energy);
// }

// unsigned int	ClapTrap::getDamage(void) const
// {
// 	return (_damage);
// }
