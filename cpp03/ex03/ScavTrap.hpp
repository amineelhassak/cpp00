#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public  ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string);
        ScavTrap(const ScavTrap &);
        ScavTrap &operator=(const ScavTrap &);
        void guardGate(void);
        ~ScavTrap(); 
};

#endif