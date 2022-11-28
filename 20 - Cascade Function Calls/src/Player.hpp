#ifndef __PLAYER
#define __PLAYER

#include <string>

class Player {
    private:
        std::string nama_depan;
        std::string nama_tengah;
        std::string nama_belakang;
    public:
        Player(); // constructor
        void display();

        Player& setNamaDepan(const char*);
        Player& setNamaTengah(const char*);
        Player& setNamaBelakang(const char*);

};

#endif