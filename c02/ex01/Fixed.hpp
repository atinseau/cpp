/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurtinseau <arthurtinseau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 10:27:00 by arthurtinse       #+#    #+#             */
/*   Updated: 2021/08/04 10:28:33 by arthurtinse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cmath>

class Fixed
{
private:
	static const int _bits = 8;
	int _value;

public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed(void);
	Fixed(const Fixed & rhs);
	Fixed & operator=(const Fixed & rhs);

	void	setRawBits(int const raw);

	int		toInt(void) const;
	float	toFloat(void) const;
	int		getRawBits(void) const;
};

std::ostream & operator<<(std::ostream & o, const Fixed & rhs);