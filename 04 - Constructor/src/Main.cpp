#include <iostream>
#include <string>

using namespace std;

// class tanpa constructor
class Polos{
    public:
        string dataString;
        int dataInteger;
};

// class dengan constructor
class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;

        // ini adalah constructor yang dipanggil pertama kali saat object dibuat
        // Mahasiswa(){
        //     cout << "ini adalah constructor" << endl;
        // }

        // constructor dengan parameter
        Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK){
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIM = inputNIM;
            Mahasiswa::jurusan = inputJurusan;
            Mahasiswa::IPK = inputIPK;

            cout << Mahasiswa::nama << endl;
            cout << Mahasiswa::NIM << endl;
            cout << Mahasiswa::jurusan << endl;
            cout << Mahasiswa::IPK << endl;
        }

};

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("ucup","13305041","teknik pertanian",4.0);
    Mahasiswa mahasiswa2 = Mahasiswa("otong","13305042","teknik peternakan",3.0);

    // Polos objectPolos;
    // objectPolos.dataString = "polos";
    // objectPolos.dataInteger = 0;

    // cout << objectPolos.dataString << endl;
    // cout << objectPolos.dataInteger << endl;

    return 0;
}
