#include <iostream>
#include <string>
#include "Player.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Player player1 = Player("Naruko"); // ini adalah object di stack
    player1.display();

    // implementasi dari getter
    cout << player1.getName() << endl; // read 
    // player1.name = "Luna"; // tidak bisa write

    // kegiatan bertarung
    cout << "bertarung" << endl;
    player1.addExperience(25); // setter
    player1.display();
    player1.addExperience(50);
    player1.display();
    player1.addExperience(10);
    player1.display();
    player1.addExperience(25);

    // hasilnya
    player1.display();

    // bertarung lagi
    cout << "bertarung" << endl;
    player1.addExperience(25); // setter
    player1.display();
    player1.addExperience(50);
    player1.display();
    player1.addExperience(10);
    player1.display();
    player1.addExperience(25);
    player1.display();
    return 0;
}
