#include<iostream>
using namespace std;

void generateRandomArray(int array[] , int n){
    // inisialiasasi untuk membuat nilai random
    for(int i = 0 ; i < n ; i++){
        array[i] = rand() % 100+1;
    }
}

void printArray(int array[] , int size){
    for(int i = 0 ; i < size ; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void selectionShort(int array[],int n){
    int i , j , min_idx;
    for(int i = 0; i < n - 1 ; i++){
        min_idx = i;
        for(int j = i + 1 ; j < n ; j++){
            if(array[j] < array[min_idx]){
                min_idx = j;
            }
        }
        // pertukaran
        int temp = array[min_idx];
        array[min_idx] = array[i];
        array[i] = temp;
    }
}

int main(){
     int n ;
     cout << "Masukan jumlah data yang akan di urutkan" ;
     cin >> n;
     int array[n];
     generateRandomArray(array,n);
     cout << "Array Sebelum di urutkan" << endl;
     printArray(array,n);
        // logika pengurutan
    
     selectionShort(array,n);
     cout << "Array Sesudah di urutkan" << endl;
     printArray(array,n);
    return 0;
}