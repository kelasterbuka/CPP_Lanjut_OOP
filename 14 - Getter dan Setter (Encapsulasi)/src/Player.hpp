#ifndef __PLAYER
#define __PLAYER

#include <string>

class Player{
    private:
        std::string name;
        double attackPower;
        int level;
        int exp;

    public:
        Player(const char* name);
        // getter, ini artinya kita akan membuat attribute menjadi read only
        std::string getName();
        // setter, ini untuk write data ke class
        void addExperience(int);
        void display();
};
#endif