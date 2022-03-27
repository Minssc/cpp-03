/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 22:23:43 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/28 00:04:31 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:

	public:
		FragTrap(void);
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &a);
		~FragTrap(void);

		const FragTrap	&operator=(const FragTrap &a);

		void	highFivesGuys(void) const;
};

# endif