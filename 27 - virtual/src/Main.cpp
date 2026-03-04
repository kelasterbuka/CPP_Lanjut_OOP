// virtual, vtable, vptr

#include <iostream>
#include <string>

using namespace std;

class Hero{
    public:
        virtual void castSkill(){
            cout << "[Hero] Mengeluarkan basic attack standard"<< endl;
        }
};

class Gusion: public Hero{
    public:
        void castSkill(){
            cout << "[Gusion] Melempar 5 dagger ke arah musuh! (magic damage)" << endl;
        }
};

class Layla: public Hero{
    public:
        void castSkill(){
            cout << "[Layla] Menembak Malefic Energy!" << endl;
        }
};

int main(){
    Gusion player1;
    Layla player2;

    Hero* semuaPlayer[2];
    semuaPlayer[0] = &player1;
    semuaPlayer[1] = &player2;

    // kita akan simpan alamat dari player1 ke dalam pointer, pointernya dalam hero
    Hero* pointerHero = &player1;
    cout << "alamat player 1 : " << pointerHero << endl;

    //kita suruh dia castskill
    pointerHero->castSkill();
    player1.castSkill();
    semuaPlayer[1]->castSkill();

    
    return 0;
}
