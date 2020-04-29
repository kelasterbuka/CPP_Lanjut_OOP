#ifndef __MAHASISWA
#define __MAHASISWA

#include <string>
#include <iostream>

class Mahasiswa{
    // Attribute
    public: // ini dapat diakses oleh siapa pun
        std::string namePublic;
    
    private: // ini hanya dapat diaskes oleh class itu sendiri
        std::string namePrivate;

    // methods dan constructor
    public:
        // constructor selalu public
        Mahasiswa(const char* name);
        void showDisplay();
    
    private:
        void showDisplayPrivate();
};

#endif