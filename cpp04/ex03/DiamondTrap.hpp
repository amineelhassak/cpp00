#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
class DiamondTrap:public  ScavTrap, public FragTrap
{
private:
    
public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap &operator=(const DiamondTrap &);
    DiamondTrap(const DiamondTrap &);
};



#endif