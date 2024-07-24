#ifndef FragTrap_HPP
#define FragTrap_HPP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap:  public  ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string);
        FragTrap(const FragTrap &);
        FragTrap &operator=(const FragTrap &);
        void highFivesGuys(void);
        ~FragTrap(); 
};

#endif