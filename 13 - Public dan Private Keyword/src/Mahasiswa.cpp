#include "Mahasiswa.hpp"
#include <iostream>

// constructor selalu public
Mahasiswa::Mahasiswa(const char* name){
    this->namePublic = name;
    this->namePrivate = name;
}

void Mahasiswa::showDisplay(){
    std::cout << "Nama Mahasiswa : " << this->namePrivate << std::endl;
}

void Mahasiswa::showDisplayPrivate(){
    std::cout << "Nama Mahasiswa : " << this->namePrivate << std::endl;
}