#include<iostream>
#include<fstream> // ini untuk memanggil modul atau istilah lain lib

using namespace std;
int main(){
    // melakukan file read (r)
    ifstream readFile ("readfile_text.txt",ifstream::in); // di sebut inisialisasi
    // format dasarnya 
    // tipeData namaVariabel ("alamatFiledanNamaFile.extension", perintahyangmaudilakukan)
    if(readFile.is_open()){ // di check apakah sudah ke buka atau belum 
        cout << "File berhasil di di buka dengan nama readfile_text.txt" << endl;
         // memanggil isinya 
        cout << "Isi dari file readfile_text.txt : " << endl;
        // kita sipkan penampunagan kata / line / row
        string row;
        while(getline(readFile, row)){
            cout << row << endl;
        }
        readFile.close();
    }else{
        cerr << "File gagal di buka karena tidak ada filenya !" << endl;
    }

    cout << endl;
    cout << endl;

    // memnulis file dengan isinya 
    // sifatnya kalau filenya di temukan akan langsung di recreate di buat ulang isinya 
    // kalau file nya tidak ada dia kan langsung membuat file baru dan mengisikan sesuai perintah
    ofstream menulis_file("readfile_text2.txt",ofstream::out);

    if(menulis_file.is_open()){
        cout << "File dengan nama readfile_text2.txt di temukan." << endl;
        // menambhakan line baru 
        menulis_file << "\nTugas : IT Suport & Cybersecurity \n";
        menulis_file.close();
    }else{
        cerr << "File terjadi masalah pada ofstream::out" << endl;
    }
    cout << endl;
    cout << endl;
    // update (append) untuk menambhakan tulisan 
    // sifatnya akan di lakukan update terus menerus di dalam file setiap di jalankan
    ofstream append_file("readfile_text.txt",ios::app);
    if(append_file.is_open()){
        string kata_yang_ditambah = "Tugas : IT Suport & Cybersecurity";
        cout << "File dengan nama readfile_text.txt di temukan." << endl;
        cout << "Tulisan yang di tambahakan ke dalam file tersebut : " << endl;
        cout << kata_yang_ditambah << endl;
        append_file << "\n"<< kata_yang_ditambah <<"\n";
        append_file.close();
    }else{
        cerr << "File terjadi masalah pada ios::app" << endl;
    }

    cout << endl;
    cout << endl;

    // gabungkan antara in dan out  (r+)
    // in dan out itu di wajibkan file ada
    fstream readAndWrite("read_and_write.txt",ios::in | ios::out );
    if(readAndWrite.is_open()){
       cout << "File dengan nama read_and_write.txt di temukan." << endl;
       readAndWrite << "Nama Singkatan : Fadjri" << endl;
       // langsung print tulisan yang ada di text
       string row;
       // setline artinya membuat nilai 
       // getline artinya mengambil 1 baris  
       while(getline(readAndWrite,row)){
            cout << row << endl;
       }
       readAndWrite.close();
    }else{
        cerr << "File terjadi masalah pada ios::in | ios::out" << endl;
    }
    cout << endl;
    cout << endl;
    // a+ (append and read)
    fstream append_and_read("append_and_read.txt",ios::app | ios::in);
    if(append_and_read.is_open()){
        cout << "File dengan nama append_and_read.txt di temukan." << endl;
        append_and_read << "1.Clean Code : Robert Cecil Martin" << endl;
        string row;
        while(getline(append_and_read,row)){
            cout << row << endl;
        }
        append_and_read.close();
    }
    else{
        cerr << "File terjadi masalah pada ios::app | ios::in" << endl;
    }

    // W+ (write / read / delete trunc)
    fstream write_read_and_delete("write_read_and_delete.txt",ios::out | ios::in | ios::trunc);
    if(write_read_and_delete.is_open()){
        cout << "File dengan nama write_read_and_delete.txt di temukan." << endl;
        write_read_and_delete << "1.Top Gun: Maverick" << endl;
        write_read_and_delete << "2.Insidious: The Red Door" << endl;
        write_read_and_delete << "3.Top Gun: Maverick" << endl;
         write_read_and_delete << "4.Insidious: The Red Door" << endl;
        string row;
        while(getline(write_read_and_delete,row)){
            cout << row << endl;
        }
        write_read_and_delete.close();
    }
    else{
        cerr << "File terjadi masalah pada ios::out | ios::in | ios::trunc" << endl;
    }
    return 0;
}