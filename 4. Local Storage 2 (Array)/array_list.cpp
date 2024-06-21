#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> list_filem;
    // masukin nilai
    list_filem.push_back("Top Gun");
    list_filem.push_back("Mr. Robot");
    list_filem.push_back("Lara Croft: Tomb Raider");
    list_filem.push_back("Warkop DKI Reborn: Jangkrik Boss! Part 1");

    // cetak nilainya 
    cout << "Element dalam Array List: " << endl;
    int j = 1;
    for(int i =0 ; i < list_filem.size() ; i++){
        cout << j << ". " << list_filem[i] << endl;
        j++;
    }
    
    return 0;
}