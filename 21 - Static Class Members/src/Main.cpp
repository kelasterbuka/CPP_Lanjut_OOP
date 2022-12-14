#include <iostream>
#include <string>

using namespace std;

class Hero{
    private:
        string name;
        double health;

    public:
        static int count;

        Hero(const char* name, double health){
            this->name = name;
            this->health = health;

            count++;
        }

        // destructoor
        ~Hero(){
            count--;
            cout << this->name << " sudah didelet guys" << endl;
        }

        void display(){
            cout << "name\t: " << this->name << endl;
            cout << "health\t: " << this->health << endl;
        }
};

int Hero::count = 0;

int main(int argc, char const *argv[])
{
    Hero hero1 = Hero("Ucup", 100);
    hero1.display();
    cout << "jumlah object Hero adalah: " << hero1.count << endl;
    cout << "jumlah object Hero dari class: " << Hero::count << endl;

    Hero hero2 = Hero("Otong", 100);
    hero2.display();
    cout << "jumlah object Hero adalah: " << hero2.count << endl;
    cout << "jumlah object Hero dari class: " << Hero::count << endl;

    Hero* hero3 = new Hero("Dudung", 50);
    hero3->display();
    cout << "jumlah object Hero adalah: " << hero3->count << endl;
    cout << "jumlah object Hero dari class: " << Hero::count << endl;

    Hero* hero4 = new Hero("Johny", 50);
    hero4->display();
    cout << "jumlah object Hero adalah: " << hero4->count << endl;
    cout << "jumlah object Hero dari class: " << Hero::count << endl;

    cout << "delete object" << endl;
    delete hero3;
    cout << "jumlah object Hero dari class: " << Hero::count << endl;

    return 0;
}
