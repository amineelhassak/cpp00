/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 06:12:58 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/15 06:12:59 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():RawBits(0) {
            std::cout << "Default constructor called" << std::endl;
            }
Fixed::Fixed(const Fixed& fixed):RawBits(fixed.RawBits){
            std::cout << "Copy constructor called" << std::endl;
            }

Fixed &Fixed::operator=(Fixed &fixed)   {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->RawBits = fixed.RawBits;
    return (*this);
        }

int Fixed::getRawBits( void ) const {
    return (this->RawBits) ;
}

void Fixed::setRawBits( int const raw ) {
    this->RawBits = raw ;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
            }
