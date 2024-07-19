#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("default"),Hit_points(10),Energy_points(10),Attack_damage(0){
    std::cout<<"ClapTrap default constructor is called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name),Hit_points(10),Energy_points(10),Attack_damage(0){
    std::cout<<"ClapTrap parametrized constructor is called"<<std::endl;
}


void ClapTrap::attack(const std::string& target)
{
    if (Energy_points > 0)
    {
        Energy_points--;
        std::cout << "ClapTrap " << this->name <<  " attacks " << target << " , causing " << Attack_damage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{
    Energy_points == Hit_points;
}

ClapTrap::~ClapTrap(){}