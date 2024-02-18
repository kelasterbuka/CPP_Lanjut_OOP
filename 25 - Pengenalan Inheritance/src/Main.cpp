#include <iostream>
#include <string>

// base class / abstract class
class Hero {
    public:
        std::string name;

        void sayName(){
            std::cout << "nama saya " << this->name << std::endl;
        }
};

// subclass
class HeroIntel : public Hero {

};

class HeroStrength : public Hero {

};


int main(int argc, char const *argv[])
{
    Hero hero1 = Hero();

    hero1.name = "otong";
    hero1.sayName();

    HeroIntel hero2 = HeroIntel();
    hero2.name = "ucup";
    hero2.sayName();

    HeroStrength hero3 = HeroStrength();
    hero3.name = "ojan";
    hero3.sayName();

    
    return 0;
}
