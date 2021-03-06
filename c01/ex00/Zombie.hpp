/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:37:10 by arthur            #+#    #+#             */
/*   Updated: 2021/08/24 16:54:37 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		virtual ~Zombie();
		void	setName(std::string);
		void	annonce(void) const;

	private:
		std::string _name;
};	

Zombie *newZombie(std::string name);
void randomChump( std::string name );

#endif