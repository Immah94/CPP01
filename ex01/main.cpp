#include "Zombie.hpp"

int main(void)
{
    int N = 4;

    Zombie *zombie = zombieHorde(N, "zombie");

    for (int i = 0; i < N; i++)
        zombie[i].announce();
    
    delete[] zombie;
    return 0;
}