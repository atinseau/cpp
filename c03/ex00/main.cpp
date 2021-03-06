/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurtinseau <arthurtinseau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:57:22 by arthur            #+#    #+#             */
/*   Updated: 2021/08/24 11:52:19 by arthurtinse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) 
{

	ClapTrap *sachaKetchum = new ClapTrap("Sacha Ketchum");

	sachaKetchum->attack("Regis chen");
	sachaKetchum->takeDamage(100);
	sachaKetchum->beRepaired(90);

	return (0);
}