#include<iostream>
using namespace std;

// bikin bentuk 
struct tali {
    string data;
    tali* next;

};

int main(){
    // ada 3 arah data
    tali* utama = nullptr;
    tali* cadangan = nullptr;
    tali* terakhir = nullptr;
    // cara memberikan ruang di ram 
    utama = new tali();
    cadangan = new tali();
    terakhir = new tali();

    // mengisi data nya 
    utama->data = "Kopi";
    utama->next = cadangan;

    cadangan->data = "Susu";
    cadangan->next = terakhir;

    terakhir->data = "Kopi Aren";
    terakhir->next = nullptr;
    // balikin ke tapi pertama
    // ubah data
    tali* sambungan = utama;

    cout << "Linked list : " << endl;
    while(sambungan != nullptr){
        cout << sambungan->data << endl;
        sambungan = sambungan->next;
    }
    // menghapus memory yang sudah terpakai
    delete utama;
    delete cadangan;
    delete terakhir;

    return 0;
}