#ifndef __PLAYER
#define __PLAYER

#include <string>
#include "Weapon.hpp"


class Player{
    private:
        std::string name;
        double health;
        Weapon* weapon;
    
    public:
        Player(const char*);
        void display();
        void attack(Player* player);
        //getter
        std::string getName();
        //setter
        void equipWeapon(Weapon*);

    private:
        void defence(double);
};

#endif