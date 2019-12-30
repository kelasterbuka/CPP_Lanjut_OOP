#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        double IPK;

        Mahasiswa(string nama, double IPK){
            Mahasiswa::nama = nama;
            Mahasiswa::IPK = IPK;
        }

        // method tanpa parameter dan tanpa return
        void tampilkanData(){
            cout << "Nama saya " << nama << ", IPK saya adalah ";
            cout << IPK << endl;
        }

        // method dengan parameter dan tanpa return
        void ubahNama(const char* namaBaru){
            Mahasiswa::nama = namaBaru;
        }

        // method tanpa parameter dan dengan return
        string getNama(){
            return Mahasiswa::nama;
        }

        double getIPK(){
            return IPK;
        }

        // method dengan parameter dan dengan return
        double katrolIPK(const double &tambahanNilai){
            return Mahasiswa::IPK + tambahanNilai;
        }

};


int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("ucup",2.5);
    Mahasiswa mahasiswa2 = Mahasiswa("otong",4.0);
    mahasiswa1.tampilkanData();
    mahasiswa2.tampilkanData();

    mahasiswa1.ubahNama("mario");
    mahasiswa1.tampilkanData();

    string dataNama = mahasiswa1.getNama();
    cout << "dataNama = " << dataNama << endl;
    cout << "dataIPK = " << mahasiswa1.getIPK() << endl;
    cout << "nilai katrol " << mahasiswa2.katrolIPK(-2.23) << endl;
    return 0;
}
