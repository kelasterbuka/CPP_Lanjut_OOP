#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "Player.hpp"


Player::Player(const char* name){
    this->name = name;
    this->health = 100;
}
void Player::display(){
    std::cout << "\nName\t: " << this->name << std::endl;
    std::cout << "Health\t: " << this->health << std::endl;
    std::cout << "Weapon\t: " << this->weapon->getName() << std::endl;
    std::cout << "Power\t: "<< this->weapon->getPower() << std::endl;
}
void Player::attack(Player* player){
    if (this->health <= 0){
        std::cout << this->name << " sudah meninggal" << std::endl;
        std::cout << this->name << " tidak dapat menyerang" << std::endl;
    } else {
        std::cout << std::endl << this->name << " menyerang " << player->getName() << std::endl;
        player->defence(this->weapon->getPower());
    }
}
//getter
std::string Player::getName(){
    return this->name;
}
//setter
void Player::equipWeapon(Weapon* weapon){
    this->weapon = weapon;
}
void Player::defence(double damage){
    this->health -= damage;
    std::cout << this->name << " mendapatkan damage : " << damage << std::endl;

    if (this->health <= 0){
        std::cout << this->name << " meninggal" << std::endl;
    }

}