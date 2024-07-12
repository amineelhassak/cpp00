#include "Zombie.hpp"
#define  N 2

int main()
{
    Zombie *zom= zombieHorde(N, "Zom.");
    for(int i = 0 ;i < N; i++)
        zom[i].announce();
    delete[] zom;
    return (0);
}