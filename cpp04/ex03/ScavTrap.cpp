#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap "<< this->name << " Default constructor is called!\n";
    this->name = "Default";
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap & clap){
    std::cout << "ScavTrap " << this->name << " Copy constructor called" << std::endl;
    *this = clap;

}

ScavTrap &ScavTrap::operator=(const ScavTrap & clap)
{
    if (this != &clap)
    {
        this->Hit_points = clap.Hit_points;
        this->Energy_points = clap.Energy_points;
        this->Attack_damage = clap.Attack_damage;
        std::cout << "ScavTrap "<< this->name << " assignement operator is called" << std::endl;
    }
    return (*this);
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap : " << this->name << "  is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap : " << this->name << " is destroyed." << std::endl;
}