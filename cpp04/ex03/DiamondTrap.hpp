#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
class DiamondTrap:public  ScavTrap, public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(std::string);
    DiamondTrap &operator=(const DiamondTrap &);
    DiamondTrap(const DiamondTrap &);
};



#endif