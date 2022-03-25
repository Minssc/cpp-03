/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 22:23:43 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/26 00:56:30 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:

	public:
		FragTrap(void);
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &a);
		virtual	~FragTrap(void);

		const FragTrap	&operator=(const FragTrap &a);

		void	highFivesGuys(void);

		static const unsigned int	defaultHealth = 100;
		static const unsigned int	defaultEnergy = 100;
		static const unsigned int	defaultDamage = 30;
};

# endif