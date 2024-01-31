/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:28:40 by amel-has          #+#    #+#             */
/*   Updated: 2024/01/29 17:28:41 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc,char **argv)
{
  for (size_t i = 1; i < (size_t)argc; i++)
  {
    for (size_t j= 0; argv[i][j]; j++)
      std::cout << (char)toupper(argv[i][j]);
  }
}