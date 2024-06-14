#include<iostream>
#include<map>
#include <cmath>


using namespace std;
int main(){
    // inisialisai
    map<int , string> treeMap;

    // create
    treeMap[0] = "Satu";
    treeMap[3] = "tiga";
    treeMap[2] = "dua";
    treeMap[4] = "empat";

    // cara manggilnya 
    cout << "Nilai yang ada di dalam kunci ke tiga atau tiga adalah " << treeMap[3] << endl;

    // update
    treeMap[3] = "Makan Enak";
    cout << "Nilai yang ada di dalam kunci ke tiga atau tiga adalah " << treeMap[3] << endl;

    // menghapus
    treeMap.erase(3);
    cout << "Element pada hash_map" << endl;
    for(const auto& elmt : treeMap){
        cout << elmt.first << " : " << elmt.second << endl;
    }
    cout << "ukuran ram atau memory usage dari treeMap " << sizeof(treeMap) << endl;
    
    float hasil_bagi = (float) 3/8;
    hasil_bagi--;
    cout << hasil_bagi << endl;

    // 3 pangkat 3
    int hasil = pow(2,10);
    cout << hasil << endl;

    // akar 2 akar 3
    double hasil_akar = pow(2,1/3.);
    cout << hasil_akar << endl;

    // persentase rumus dasar ? 
    int a  = 10;
    int total = 10;
    int persen = 100;

    float hasil_persen = (float) 10 * 5/100 + pow(5,2);
    cout << hasil_persen << endl;


    return 0;
}