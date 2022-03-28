/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 22:23:43 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/28 13:05:21 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"
#include <string>

class FragTrap: virtual public ClapTrap
{
	private:

	public:
		FragTrap(void);
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &a);
		virtual	~FragTrap(void);

		const FragTrap	&operator=(const FragTrap &a);

		void	highFivesGuys(void) const;

		static const unsigned int	defaultHealth = 100u;
		static const unsigned int	defaultEnergy = 100u;
		static const unsigned int	defaultDamage = 30u;
};

# endif