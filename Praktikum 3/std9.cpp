#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // DEKLARASI VARIABEL
    int opsi;
    double nilai;
    double nilaiKonversi;
    
    // INPUT
    cout << string(30, '=') << endl;
    cout << "Pilih Konversi:" << endl;
    cout << "1. meter ke sentimeter" << endl << "2. meter ke milimeter" << endl << "3. meter ke kilometer" << endl;
    cout << string(30, '=') << endl;
    cin >> opsi;
    cout << "Masukan nilai (meter) : " << endl;
    cin >> nilai;

    // KALKUKASI SESUAI KONDISI 
    switch (opsi) {
        case 1:
            nilaiKonversi = nilai * 100;
            cout << "Nilai (sentimeter) : ";
            break;
        case 2:
            nilaiKonversi = nilai * 1000;
            cout << "Nilai (milimeter) : ";
            break;
        case 3:
            nilaiKonversi = nilai / 1000;
            cout << "Nilai (kilometer) : ";
            break;
        default:
            cout << "[Error] Masukan opsi atau nilai yang sesuai!" << endl;
            break;
    }

    // OUTPUT NILAI
    cout << nilaiKonversi << endl;
}