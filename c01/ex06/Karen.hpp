/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 21:10:16 by arthur            #+#    #+#             */
/*   Updated: 2021/07/30 20:19:00 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# define CANONIC(name) 				\
	virtual ~name();				\
	name &operator=(const name&);
# define DEBUG 359
# define INFO 300
# define WARNING 534
# define ERROR 394

class Karen
{
private:
	std::string _level;
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Karen(void);
	CANONIC(Karen);
	void complain(std::string level);
	void print_all_above(int level_count);
};