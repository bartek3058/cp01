#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    int N, i;

    N = 6;
    i = 0;
    Zombie* horde =  zombieHorde(N, "HeapZombie");
    while (i < N)
    {
        horde[i].announce();
        i++;
    }
    delete[] horde; 
}