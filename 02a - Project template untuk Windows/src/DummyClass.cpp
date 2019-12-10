#include <iostream>
#include "DummyClass.h"

DummyClass::DummyClass(const int &value){
    data = value;
}

void DummyClass::setData(const int &value){
    data = value;
}

void DummyClass::print(){
    std::cout << data << std::endl;
}

int DummyClass::getData(){
    return data;
}