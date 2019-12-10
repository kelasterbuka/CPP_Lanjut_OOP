#include <iostream>
#include "DummyClass.h"

using namespace std;

int main(int argc, char const *argv[]){
    cout << "Template" << endl;
    DummyClass object(10);
    object.print();
    object.setData(15);
    object.print();
    object.setData(20);
    cout << object.getData() << endl;
    return 0;
}
