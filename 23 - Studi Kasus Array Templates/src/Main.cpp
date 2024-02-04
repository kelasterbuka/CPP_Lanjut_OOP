#include <iostream>
#include <array>
#include <iomanip>
#include <cstddef>


int main(int argc, char const *argv[])
{
    int data[5] = {0,1,2,3,4}; // data

    std::cout << data << std::endl; // print address

    std::cout << "[ ";
    for(int i=0; i <= 4; i++){
        std::cout << data[i] <<" ";
    }
    std::cout << "]" << std::endl;

    std::array<int, 5> data_array = {5,6,7,8,9};

    std::cout << "masukkan array dengan ukuran " << data_array.size() << std::endl;
    std::cout << "index" << std::setw(15) << "nilai" << std::endl;

    for(std::size_t i=0; i < data_array.size(); i++){
        std::cout << std::setw(5) << i;
        std::cout << std::setw(15) << data_array[i] << std::endl;
    }

    std::cout << "\n operator at 3 = " << data_array.at(3) << std::endl;
	std::cout << "\n operator [] 3 = " << data_array[3] << std::endl;
	std::cout << "\n operator front = " << data_array.front() << std::endl;
	std::cout << "\n operator back = " << data_array.back() << std::endl;
	std::cout << "\n operator data = " << data_array.data() << std::endl; // mengembalikan pointer

    std::array<int, 5> data_array2 = {5,6,7,8,10};

    bool is_sama = (data_array == data_array2);
    std::cout << "\nmembandingkan kedua array, ternyata hasilnya adalah " << is_sama << std::endl;

    int data2[5] = {0,1,2,3,4};
    bool is_sama2 = (data == data2); // pasti akan menghasilkan false, karena address yang dibandingkan
    std::cout << "\nmembandingkan kedua array, ternyata hasilnya adalah " << is_sama2 << std::endl;
    return 0;
}
