/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 22:23:43 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/28 13:03:43 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"
#include <string>

class ScavTrap: public ClapTrap
{
	private:

	public:
		ScavTrap(void);
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &a);
		~ScavTrap(void);

		const ScavTrap	&operator=(const ScavTrap &a);

		void	attack(const std::string &target);
		void	guardGate(void) const;

};

# endif