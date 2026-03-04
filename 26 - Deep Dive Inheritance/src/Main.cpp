#include <iostream>
#include <string>

using namespace std;

class Hero{
    public:
        int hp;         // 4 bytes
        int baseDamage; // 4 bytes
    
        void serang(int damageFisik){
            cout << "Serang dengan pedang: " << damageFisik << " damage"<< endl;
        }

        void serang(double damageTrue){
            cout << "Serang true damage: " << damageTrue << " damage"<< endl;
        }
};

class Mage : public Hero{
    public:
        int magicPower; // 4 bytes
};

class Marksman : public Hero{
    public:
        using Hero::serang;

        void serang(string tipePeluru){
            cout << "Tembak peluru tipe: " << tipePeluru << endl;
        }
};

void baseHeal(Hero& hero){
    hero.hp += 500;
    cout << "Heal 500 hp masuk! " << endl;
    cout << "hp di dalam fungsi: " << hero.hp << endl;
}

int main(){
    Mage pharse;

    cout << "Ukuran Hero: " << sizeof(Hero) << " bytes" << endl;
    cout << "Ukuran Mage: " << sizeof(Mage) << " bytes" << endl;

    cout << "\n---- Alamat Memori Pharse ----" << endl;
    cout << "Alamat objek Pharse: " << &pharse << endl;
    cout << "Alamat hp: " << &pharse.hp << endl;
    cout << "Alamat baseDamage: " << &pharse.baseDamage << endl;
    cout << "Alamat magicPower: " << &pharse.magicPower << endl;

    Marksman layla;
    layla.serang("Armor Piercing"); 
    layla.serang(100);

    Mage eudora;
    eudora.hp = 1000;
    eudora.magicPower = 800;

    cout << "sebelum heal, HP eudora: " << eudora.hp << endl;
    baseHeal(eudora);
    cout << "setelah heal, HP eudora: " << eudora.hp << endl;

    return 0;
}