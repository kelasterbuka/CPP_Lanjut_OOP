#include <iostream>
#include <string>
#include "Player.hpp"

Player::Player(const char* name){
    this->name = name;
    this->level = 1;
    this->exp = 0;
    this->attackPower = 100;
}

// getter, ini artinya kita akan membuat attribute menjadi read only
std::string Player::getName(){
    return this->name;
}

// setter, ini untuk write data ke class
void Player::addExperience(int expValue){
    int maxExp = 100;
    std::cout << "Mendapatkan exp = " << expValue << std::endl;
    this->exp += expValue;
    if(this->exp >= maxExp){
        // maka dia level up
        this->level++;
        this->attackPower += 100;
        std::cout << "LEVEL UP" << std::endl;
        this->exp = 0;
    }
}

void Player::display(){
    std::cout << "Name\t: " << this->name << std::endl;
    std::cout << "Level : " << this->level <<", Exp : " << this->exp << std::endl;
    std::cout << "Attack\t :" << this->attackPower << std::endl;
}