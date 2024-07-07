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


#include <iostream>

int main(int argc, char **argv)
{
    if (argc > 1)
    {
      for (int i = 1;i < argc;i++)
      {
        for (int j=0;argv[i][j];j++)
          std::cout << (char)toupper(argv[i][j]);
        if (i != argc - 1)
          std::cout << " ";
      }
      std::cout << std::endl;
    }
    else
      std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
}