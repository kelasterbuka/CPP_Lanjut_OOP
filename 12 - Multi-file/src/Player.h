#ifndef __PLAYER
#define __PLAYER
#include <string>

// Deklarasi class

class Player{
    public:
        std::string name;

        // Contructor
        Player(const char*); // dalam bentuk prototype
        void display();
        std::string getName();
        void setName(const char*);
};

#endif