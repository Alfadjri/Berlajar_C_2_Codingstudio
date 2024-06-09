#include<iostream>
using namespace std;

int main(){
    // Tipe data Integer atau bilangan bulat
    int integer_number = 10; // inisialisasi
    short short_number = 5; 
    long longNumber = 1234567890;
    long long verLong_number = 9876543210;

    // Tipe data float atau desimal 
    float float_number = 3.14f;
    double double_number = 2.71828;
    long double long_double_number = 1.61803398875;

    // tipe data Char
    char charVariabel = 'b';

    // Tipe Data Boolean ini sisinya cuman True (1) dan False (0)
    bool boolVaraibel = true;

    cout << "Integer Number \t\t: " <<  integer_number << endl;
    cout << "Desimal Number \t\t: " <<  double_number << endl;
    cout << "Char \t\t\t: " << charVariabel << endl;
    cout << "Bool \t\t\t: " << boolalpha << boolVaraibel << endl;
    // tipe data non primitif
    // string itu gabungan dari panjang char
    char nama[5] = {'a','l','f','a','d'}; // alfadjri
    string nama_lengkap = "alfadjri"; // tipe data non primitif
    cout << "nama : " << nama[0] << nama[1] << nama[2] << nama[3] << endl;
    cout << "nama lengkap " << nama_lengkap; 
    return 0;
}