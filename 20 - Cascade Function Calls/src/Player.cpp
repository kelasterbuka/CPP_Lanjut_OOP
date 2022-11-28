#include <iostream>
#include <string>
#include "Player.hpp"

Player::Player(){
    nama_depan = "depan"; // menggunakan teknik implicit
    this->nama_tengah = "tengah"; // menggunakan teknik implicit dengan menggunakan pointer this dan arrow
    (*this).nama_belakang = "belakang"; // menggunakan dereference this pointer dan dot operator
}

void Player::display(){
    std::cout << "Nama : ";
    std::cout << (*this).nama_depan << " " ;
    std::cout << nama_tengah << " ";
    std::cout << this->nama_belakang << std::endl;
}

// menggunakan reference
Player& Player::setNamaDepan(const char* depan){
    this->nama_depan = depan;
    return *this; // menggunakan pointer untuk mengaktifkan cascade call
}

Player& Player::setNamaTengah(const char* tengah){
    this->nama_tengah = tengah;
    return *this;
}

Player& Player::setNamaBelakang(const char* belakang){
    this->nama_belakang = belakang;
    return *this;
}