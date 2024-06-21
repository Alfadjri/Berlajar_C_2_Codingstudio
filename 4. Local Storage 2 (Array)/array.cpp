#include<iostream>
using namespace std;

int main() {
    // mendefinsikan 
    // ini nilainya tidak akan bisa di ubah" jadi udah di panggil duluan dan di siapkan duluan 
    const int size = 6;
    string number[size] = {"testing 1","testing 2","testing 3","testing 4","testing 5"};
    // di bawah deklarasi itu sifatnya di timpa 
    cout << " Element Array : " << endl;
    // i++ itu sama dengan i = i + 1
    for(int i = 0 ; i < size ; i++ ){
        cout << number[i] << endl;
    }
    // update atau perbaharui nilai 
    number[1] = "Array ini posisi ke 1 ";
    cout << " Element Array posisi array ke 1 di update : " << endl;
    // i++ itu sama dengan i = i + 1
    // kalau gak berhenti itu akan error out of bound 
    for(int i = 0 ; i < size ; i++ ){
        cout << number[i] << endl;  
    }
    
    number[4] = "ini array terakhir";
    cout << " Element Array yang size nya di kurangin : " << endl;
    // i++ itu sama dengan i = i + 1
    // kalau gak berhenti itu akan error out of bound 
    for(int i = 0 ; i < size ; i++ ){
        cout << number[i] << endl;  
    }
    // cara curang untuk menghilangkan nilai
    number[4] = "";
    cout << " Element Array yang size nya di kurangin : " << endl;
    // i++ itu sama dengan i = i + 1
    // kalau gak berhenti itu akan error out of bound 
    for(int i = 0 ; i < size ; i++ ){
        cout << number[i] << endl;  
    }

    return 0;
}