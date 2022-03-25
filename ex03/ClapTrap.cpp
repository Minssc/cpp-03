/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:22:39 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/26 00:49:11 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <limits>

ClapTrap::ClapTrap(void)
	: _name("John Doe"), _health(ClapTrap::defaultHealth),
		_energy(ClapTrap::defaultEnergy), _damage(ClapTrap::defaultDamage)
{
	std::cout << "Clap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
	: _name(name), _health(ClapTrap::defaultHealth),
		_energy(ClapTrap::defaultEnergy), _damage(ClapTrap::defaultDamage)
{
	std::cout << "Clap string constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	std::cout << "Clap copy constructor called" << std::endl;
	*this = a;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Clap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &a)
{
	_name = a.getName();
	_health = a.getHealth();
	_energy = a.getEnergy();
	_damage = a.getDamage();
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (!_health || !_energy)
		return ;
	_energy--;
	std::cout << "ClapTrap " << _name << " attacks " << target
	<< ", causing " << _damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > _health)
	{
		_health = 0;
		return ;
	}
	_health -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_health || !_energy)
		return ;
	_energy--;
	if ((std::numeric_limits<unsigned int>::max() - _health) < amount)
	{
		_health = std::numeric_limits<unsigned int>::max();
		return ;
	}
	_health += amount;
}

void	ClapTrap::printStats(void)
{
	std::cout << "Stats of " << _name << ": hp = " << _health
	<< ", energy = " << _energy << ", damage = " << _damage << std::endl;
}

std::string		ClapTrap::getName(void) const
{
	return (_name);
}

unsigned int	ClapTrap::getHealth(void) const
{
	return (_health);
}

unsigned int	ClapTrap::getEnergy(void) const
{
	return (_energy);
}

unsigned int	ClapTrap::getDamage(void) const
{
	return (_damage);
}
