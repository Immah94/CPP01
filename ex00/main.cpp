#include "Zombie.hpp"

int main(void)
{
    Zombie *newZombie1;

    newZombie1 = newZombie("Marvin");
    newZombie1->announce();

    randomChump("RandomChump Zombie");
    delete newZombie1;
    
    return(0);
}