#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    int N;

    N = 2;
    Zombie *Zombie1;
    Zombie1 = zombieHorde(N, "HeapZombie");
    delete Zombie1; 
}