#include <iostream>
#include "Player.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Player* player1 = new Player();
    player1->display();

    // cascade function calls
    player1->setNamaDepan("ucup").setNamaTengah("surucup").setNamaBelakang("ganteng").display();


    Player player2 = Player();
    player2.display();

    // cascade function calls
    player2.setNamaBelakang("kweren").setNamaDepan("Otong").setNamaTengah("Surotong").display();
    return 0;
}
