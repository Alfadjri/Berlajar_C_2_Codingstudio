#include<iostream>
#include<vector> // c++ version 11
using namespace std;

int main(){
    // membuat vector kosong
    vector<int> number;
    // isi vector 
    number.push_back(10);
    number.push_back(30);
    number.push_back(20);

    // nampilin data nya gimana ? 
    cout << "element yang ada pada Vector : " << endl;
    for(int num : number){
        cout << num << endl;
    }
    cout << endl;
    // hitungan posisi tidak pernah dari 1 
    number[1] = 20;
    number[2] = 30;
    cout << "element yang ada pada Vector setelah di update : " << endl;
    for(int num : number){
        cout << num << endl;
    }
    cout << endl;

    // menghapus
    number.pop_back(); // menghapus akhirannya saja !
    cout << "element yang ada pada Vector setelah di hapus : " << endl;
    for(int num : number){
        cout << num << endl;
    }
    cout << endl;
    cout << "ukuran ram atau memory usage dari treeMap " << sizeof(number) << endl;

    return 0;
}