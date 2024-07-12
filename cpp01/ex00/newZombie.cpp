#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    return (new Zombie(name));
}

void Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}