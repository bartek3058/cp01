#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
    int i;
    new Zombie[N];
    i = 0;
    while(i < N)
    {
        Zombie1.announce();
        i++;
        Zombie1++;
    }
    return new Zombie(name);
}