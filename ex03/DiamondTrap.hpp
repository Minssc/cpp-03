/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:22:25 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/26 01:12:35 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string>

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	_name;

	public:
		DiamondTrap(void);
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &a);
		~DiamondTrap(void);

		DiamondTrap	&operator=(const DiamondTrap &a);

		void	whoAmI(void);

		void	attack(const std::string &target);
		// void	takeDamage(unsigned int amount);
		// void	beRepaired(unsigned int amount);
		// void	printStats(void);

		// std::string		getName(void) const;
		// unsigned int	getHealth(void) const;
		// unsigned int	getEnergy(void) const;
		// unsigned int	getDamage(void) const;
};

# endif