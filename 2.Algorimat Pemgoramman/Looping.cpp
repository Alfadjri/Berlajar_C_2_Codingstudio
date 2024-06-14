#include<iostream>
using namespace std;

int main(){
    // looping menggunakan while
    cout << "Looping menggunakan while" << endl;
    int i = 1;
    while(i <= 5){
        cout << i << endl;
        i++;
    }
    cout << endl;
    // looping menggunakan do while
    cout << "Looping menggunkan do while" << endl;

    int j  = 1;
    do{
        j++;
        cout << j << endl;
    }while(j <= 5);
    cout << endl;
    // ke 3 for
    cout << "Looping menggunkan for" << endl;
    for(int k = 0 ; k <= 5 ; k++){
        cout << k << endl;
    }
    cout << endl;
    // perulangan menggunakan foreach
    cout << "Looping menggunakan foreach" << endl;
    int arr[] = {1,2,3,4,5};
    for(int elem : arr){
        cout << elem << endl;
    }

    return 0;
}