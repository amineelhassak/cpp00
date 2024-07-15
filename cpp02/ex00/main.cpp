/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 06:13:07 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/15 06:13:08 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()  {
        Fixed a;
        a.setRawBits(10);

        Fixed b(a);
        Fixed c;
        c = b;

        std::cout << "Raw Value of a:" << a.getRawBits() << std::endl;
        std::cout << "Raw Value of b:" << b.getRawBits() << std::endl;
        std::cout << "Raw Value of c:" << c.getRawBits() << std::endl;
        
        return (0);
    }