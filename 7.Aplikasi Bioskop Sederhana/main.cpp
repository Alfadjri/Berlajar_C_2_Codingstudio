#include<iostream>
#include<map>
#include<fstream>
using namespace std;


void homeScreen(){
    
    cout <<"         ,-.--,         ,-.--, .=-.-. " << endl;
    cout <<".--.-.  /=/, .'.--.-.  /=/, .'/==/_ / " << endl;
    cout <<"\\==\\ -\\/=/- /  \\==\\ -\\/=/- / |==|, |  " << endl;
    cout <<" \\==\\ `-' ,/    \\==\\ `-' ,/  |==|  |  " << endl;
    cout <<"  |==|,  - |     |==|,  - |  |==|- |  " << endl;
    cout <<" /==/   ,   \\   /==/   ,   \\ |==| ,|  " << endl;
    cout <<"/==/, .--, - \\ /==/, .--, - \\|==|- |  " << endl;
    cout <<"\\==\\- \\/=/ , / \\==\\- \\/=/ , //==/. /  " << endl;
    cout <<" `--`-'  `--`   `--`-'  `--` `--`-`   " << endl;
    cout <<"========================================" << endl;
}
void endScreen(){

cout <<" ______            _______  _  _  _  _ " << endl;
cout <<"(  ___ \\ |\\     /|(  ____ \\( )( )( )( )" << endl;
cout <<"| (   ) )( \\   / )| (    \\/| || || || |" << endl;
cout <<"| (__/ /  \\ (_) / | (__    | || || || |" << endl;
cout <<"|  __ (    \\   /  |  __)   | || || || |" << endl;
cout <<"| (  \\ \\    ) (   | (      (_)(_)(_)(_)" << endl;
cout <<"| )___) )   | |   | (____/\\ _  _  _  _ " << endl;
cout <<"|/ \\___/    \\_/   (_______/(_)(_)(_)(_)" << endl;

}
void thanks(){
cout <<"/$$$$$$$$ /$$                 /$$                " << endl;
cout <<"|__  $$__/| $$                | $$                "<< endl;
cout <<"   | $$   | $$$$$$$  /$$$$$$$ | $$   /$$  /$$$$$$$"<< endl;
cout <<"   | $$   | $$__  $$| $$__  $$| $$  /$$/ /$$_____/"<< endl;
cout <<"   | $$   | $$  \\ $$| $$  \\ $$| $$$$$$/ |  $$$$$$"<< endl;
cout <<"  | $$   | $$  | $$| $$  | $$| $$_  $$  \\____  $$"<< endl;
cout <<"   | $$   | $$  | $$| $$  | $$| $$ \\  $$ /$$$$$$$/"<< endl;
cout <<"   |__/   |__/  |__/|__/  |__/|__/  \\__/|_______/ "<< endl;
                                                  
                                                  
                                                  
}

void clearScreen(){
    cout << "\033[2J\033[H";
}

void mainScreen(){
    cout << "|\t 1.USER\t" << endl;
    cout << "|\t 2.Exit\t" << endl;
}
int listJudul_filem(){
    map<int,string> listFilem;
    listFilem[1] = "Mission: Impossible - Fallout" ;
    listFilem[2] = "Top Gun: Maverick";
    listFilem[3] = "Jack Reacher";
    listFilem[4] = "The Last Samurai";
    listFilem[5] = "War of the Worlds";
    homeScreen();
    cout << "|\tList Movie : " << endl;
    for(const auto& value : listFilem){
        cout << "|\t" << value.first << ".\t" << value.second << endl;
    }
    cout << "|\t" << "0.\tKembali" <<  endl;
    return listFilem.size();
}
void catatan_pembelian(int id , string nama_pembeli){
    string namaFile = "Log_user";
    string finalNamaFile = namaFile + to_string(id) + ".txt";

    ofstream logFile(finalNamaFile,ios::app);
    if(logFile.is_open()){
        logFile << nama_pembeli << "\n";
        logFile.close();
    }
    return;
}

void user_menu(){
    int selectd , jumlah_filem , jumlah_pembelian , pembayaran , tota_harga , kembalian;
    // flet di harga 50 000
    int harga_setiap_tike = 50000;
    string nama_pembeli;
    bool status = true;
    while(status){
        try{
            jumlah_filem = listJudul_filem();
            if (!(cin >> selectd)){
                throw runtime_error("Inputan kurang tepat");
            }
            if(selectd == 0){
                return;
            }
            if(selectd > jumlah_filem){
                 throw runtime_error("movie tidak ada !");
            }
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            clearScreen();
            homeScreen();
            // logic total org yang di bolahkan 
            cout << "|\t" << "Untuk Berapa Orang  : " ; 
            if(!(cin >> jumlah_pembelian)){
                throw runtime_error("Inputan kurang tepat");
            }  
            if(jumlah_pembelian > 2){
                throw runtime_error("Tidak boleh membeli lebih dari 2 orang !");
            }
            clearScreen();
            homeScreen();
            tota_harga = harga_setiap_tike * jumlah_pembelian;
            cout << "|\t" << "Total harga yang harus di bayarkan : " << tota_harga << endl;
            cout << "|\t" << "Masukan nominal uang yang di berikan : ";
            if(!(cin >> pembayaran)){
                throw runtime_error("Inputan kurang tepat");
            }
            if(pembayaran < tota_harga){
                throw runtime_error("Uang anda kurang bos !");
            }
            kembalian = pembayaran - tota_harga;
            if(kembalian == 0 ){
                cout << "|\t" << "Uang anda pas !" << kembalian << endl;
            }else{
                cout << "|\t" << "Kembalian anda : " << kembalian << endl;
            }
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            // mengambil nama user
            for(int i = 0 ; i < jumlah_pembelian ; i++){
                cout << "|\t" << "Masukan nama pembeli ke " << i + 1 << endl;
                if(!(getline(cin,nama_pembeli))){
                    throw runtime_error("Inputan tidak sesuai");
                }
                catatan_pembelian(selectd,nama_pembeli);
            }
            clearScreen();
            thanks();
            cin.get();
            status = false;

            

        }catch(const exception& e){
            cerr << "Error : " << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            status = true;
        }
    }
}
bool list_pembelian_berdasarkan_id(int id ){
    int selectd;
    string namaFile = "Log_user";
    string finalNamaFile = namaFile + to_string(id) + ".txt";

    ifstream logFile(finalNamaFile,ifstream::in);
    if(logFile.is_open()){
        cout << "|\t" << "List nama pengunjung yang membeli filem" << endl;
        string name;
        int no = 1;
        while(getline(logFile,name)){
            cout << "|\t" << no <<". " << name <<endl;
            no++;
        }
        return true;
    }else{
        return false;
    }
}

void admin_menu(){
    int selected,jumlah_filem;
    bool exit;
    string username = "admin";
    string password = "12345678";
    string input_username;
    string input_password;
    bool status = true;
    while(status){
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        try{
            cout << "|\t " << "Username : " ;
            if(!getline(cin,input_username)){
                throw runtime_error("Inputan kurang tepat");
            }
            cout << "|\t" << "password : ";
            if(!getline(cin,input_password)){
                throw runtime_error("Inputan kurang tepat");
            }
            if(username == input_username && password == input_password){
                clearScreen();
                homeScreen();
                jumlah_filem = listJudul_filem();
                cout << "|\t" << "Masukan pilihan filem : "; 
                if (!(cin >> selected)){
                    throw runtime_error("Inputan kurang tepat");
                }
                if(selected == 0){
                    return;
                }
                if(selected > jumlah_filem){
                     throw runtime_error("movie tidak ada !");
                }
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                exit = list_pembelian_berdasarkan_id(selected);
                if(exit == false){
                    cout << "|\t" << "tidak ada pembeli" << endl;
                    cout << "tekan enter untuk kembali ke menu awal" << endl;
                    cin.get();
                }else{
                    cout << "tekan enter untuk kembali ke menu awal" << endl;
                    cin.get();
                }
                status = false;
            }else{
                cout << "Username dan password salah" << endl;
                cin.get();
                status = true;
            }
        }catch(const exception& e){
            cerr << "Error : " << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            status = true;
        }
    }
}

int main(){
    
    //  logika
    bool status_aplikasi = true;
    int selected;
    while(status_aplikasi) {
        try{
            status_aplikasi = false;
            clearScreen();
            homeScreen();
            mainScreen();
            // check input 
            cout << " Selection User : " ;
            if (!(cin >> selected)){
                throw runtime_error("Inputan tidak Valid. Harap masukkan bilangan yang tepat");
            }

            // kondisi pilihan menu 
            switch(selected){
                case 1:
                    // untuk user
                    clearScreen();
                    user_menu();
                    status_aplikasi = true;
                break;
                case 2:
                    // exit pergi
                    clearScreen();
                    endScreen();
                    status_aplikasi = false;
                    cin.get();
                    return 0 ;
                break;
                case 666:
                    clearScreen();
                    admin_menu();
                    status_aplikasi = true;
                break;
                default : 
                    cout << "Inputan tidak di temukan" << endl;
                    status_aplikasi = true;
                break;
            }

        }catch(const exception& e){
            cerr << "Error : " << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            status_aplikasi = true;
        }
    }
    return 0;
}