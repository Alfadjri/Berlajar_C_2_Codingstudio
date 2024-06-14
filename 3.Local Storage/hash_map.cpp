#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    // inisilasiasi
    unordered_map<string,int> hash_map;

    // cara menginput nilai
    hash_map["one"] = 1 ;
    hash_map["tree"] = 3;
    hash_map["two"] = 2;
    hash_map["four"] = 4;

    cout << "Element pada hash_map" << endl;
    for(const auto& elmt : hash_map){
        cout << elmt.first << " : " << elmt.second << endl;
    }

    /// memanggilnya 
    // harus berdasarkan kunci
    cout << "Nilai yang ada di dalam kunci ke dua atau two adalah " << hash_map["two"] << endl;

    // update atau mengubahnya 
    hash_map["two"] = 30;
    cout << "Nilai yang ada di dalam kunci ke dua atau two yang telah di update adalah " << hash_map["two"] << endl;

    // menghapus 
    hash_map.erase("four");

    // teknik pengambilan data semuanya 
    cout << "Element pada hash_map" << endl;
    for(const auto& elmt : hash_map){
        cout << elmt.first << " : " << elmt.second << endl;
    }

    cout << "ukuran ram atau memory usage dari treeMap " << sizeof(hash_map) << endl;

    return 0;
}