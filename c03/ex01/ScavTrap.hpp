/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurtinseau <arthurtinseau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:02:47 by arthurtinse       #+#    #+#             */
/*   Updated: 2021/08/24 12:29:33 by arthurtinse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
	private:
		
	public:
		ScavTrap(std::string name);
		virtual ~ScavTrap(void);
		void guardGate(void);
};