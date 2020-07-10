#include <iostream>
#include <string>

#include "Player.hpp"
#include "Weapon.hpp"
using namespace std;


int main(int argc, char const *argv[])
{
    Player* player1 = new Player("Sniper");
    Weapon* weapon1 = new Weapon("Senapan Angin",50);
    player1->equipWeapon(weapon1);
    player1->display();
    
    Player* player2 = new Player("Otong");
    Weapon* weapon2 = new Weapon("Panci",5);
    player2->equipWeapon(weapon2);
    player2->display();

    player1->attack(player2);
    player2->attack(player1);
    player1->display();
    player2->display();
    player1->attack(player2);
    player2->attack(player1);
    player1->display();
    player2->display();
    

    return 0;
}
