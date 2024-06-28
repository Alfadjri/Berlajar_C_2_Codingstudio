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

void bubbleSort(int array[] , int n){
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j+1] = temp;
            }
        }
    }
}

int main(){
    int n ;
    cout << "Masukan Jumlah data yang diinginkan : " ;
    cin  >> n;
    int array[n];
    generateRandomArray(array , n);
    // print nilai yang di butuhkan 
    cout << "Array sebelum di urutkan :" << endl;
    printArray(array,n);
    bubbleSort(array,n);
    cout << endl;
    cout << "Array setelah di urutkan" << endl;
    printArray(array,n);
    return 0;
}