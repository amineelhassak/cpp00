#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
}

DiamondTrap::~DiamondTrap()
{

}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap & diamond)
{
    if (this != &diamond)
    {
        this->Attack_damage = diamond.Attack_damage;
        this->Energy_points = diamond.Energy_points;
    }
    return (*this);
}
