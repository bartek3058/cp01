#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump (std::string name);

int main()
{
    Zombie *Zombie1;
    Zombie1 = newZombie("HeapZombie");
    Zombie1->announce();
    delete Zombie1;

    randomChump("StackZombie");
}