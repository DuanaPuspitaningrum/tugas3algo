#include <iostream>
#include <string>
using namespace std;
main()
{
    string username, password;
    int h1, uts1, uas1, h2, uts2, uas2, pilih;
    float hasil_algo, hasil_kalkulus;
    cout << "\n Nama : Duana Puspitaningrum \n NIM  : 124200055 \n Tugas 3 Praktikum Algoritma \n";
    cout << "\n---------------------------------------------------------------"<<endl;
    cout << "LOGIN AKUN";
    cout << endl;
    cout << "USERNAME: "; cin >> username;
    cout << "PASSWORD: "; cin >> password;
    if (username == "josevino")
        if (password == "jose12")
        {   cout << "============================"<<endl;
            cout << "\nLogin Berhasil!\n"<<endl;
            cout << "Input Nilai Mata Kuliah"<<endl;
            cout << "1. Algoritma dan Pemrograman"<<endl;
            cout << "2. Kalkulus"<<endl;
            cout << "Pilih : "; cin >> pilih;
            cout << endl;
            switch (pilih){
            case 1 :
                cout << "Nilai Harian : "; cin >> h1;
                cout << "Nilai UTS    : "; cin >> uts1;
                cout << "Nilai UAS    : "; cin >> uas1;
                hasil_algo= (h1+uts1+uas1)/3;
                    if (hasil_algo >= 80){
                        cout << "Anda Lulus Algoritma dan Pemrograman dengan Nilai "<< hasil_algo << endl;
                    } else if (hasil_algo <= 80){
                        cout << "Anda Tidak Lulus Algoritma dan Pemrograman dengan Nilai "<< hasil_algo << endl;
                    }
                    cout << "\n---------------------------------------------------------------";
                    break;
                case 2 :
                cout << "Nilai Harian : "; cin >> h2;
                cout << "Nilai UTS    : "; cin >> uts2;
                cout << "Nilai UAS    : "; cin >> uas2;
                hasil_kalkulus= (h2+uts2+uas2)/3;
                    if (hasil_kalkulus >= 80){
                        cout << "Anda Lulus Kalkulus dengan Nilai "<< hasil_kalkulus << endl;
                    } else if (hasil_kalkulus <= 80){
                        cout << "Anda Tidak Lulus Kalkulus dengan Nilai "<< hasil_kalkulus<< endl;
                    }
                    cout << "\n--------------------------------------------------------------";
                    break;
                default :
                    {
                        cout << "Input Anda Salah!";
                    }
            }

        } else {
            cout << "===================="<< endl;
            cout << endl;
            cout << "Password anda salah!"<<endl;
        }
    else if (password == "jose12")
        if (username == "josevino"){
            cout << "===================="<< endl;
            cout << endl;
            cout << "Login Berhasil!"<<endl;
        } else {
            cout << "===================="<< endl;
            cout << endl;
            cout << "Username anda salah!"<< endl;
        }
    else {
        cout << "=================================="<< endl;
        cout << endl;
        cout << "Username dan Password anda salah!"<<endl;
    }
return 0;
}
