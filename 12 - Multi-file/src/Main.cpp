#include <iostream>
#include <string>

// eksternal definition
#include "Player.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Player* playerObject = new Player("Saitama");
    playerObject->display();

    cout << "get name: "<< playerObject->getName() << endl;

    cout << "rubah nama" << endl;
    playerObject->setName("Tanjiro");
    playerObject->display();
    return 0;
}

