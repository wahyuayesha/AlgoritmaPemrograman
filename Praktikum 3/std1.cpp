#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nama;
    int posisi;
    string stringPosisi;
    int tarif;
    int jamKerja;
    int GajiTotal;

    cout << "==== POSISI ====" << endl;
    cout << "1. Magang" << endl << "2. Staff Junior" << endl << "3. Staff Senior" << endl << "4. Team Leader" << endl << "5. Kepala Departemen" << endl;

    cout << "==== DATA KARYAWAN ====" << endl;
    cout << "Nama Karyawan : ";
    cin >> nama;
    cout << "Kode Posisi : ";
    cin >> posisi;
    cout << "Jam Kerja : ";
    cin >> jamKerja;

    switch (posisi) {
        case 1:
            tarif = 15000;
            stringPosisi = "Magang";
            break;
        case 2:
            tarif = 25000;
            stringPosisi = "Staff Junior";
            break;
        case 3:
            tarif = 35000;
            stringPosisi = "Staff Senior";
            break;
        case 4:
            tarif = 50000;
            stringPosisi = "Team Leader";
            break;
        case 5:
            tarif = 75000;
            stringPosisi = "Kepala Departemen";
            break;
        default:
            cout << "Kesalahan terjadi.";
    }

    GajiTotal = tarif * jamKerja;

    int w = 15;
    cout << endl;
    cout << string(60,'=') << endl;
    cout << left << setw(w) << "Nama" << left << setw(w) << "Posisi" << left << setw(w) << "Tarif/Jam" << left << setw(w) << "Total Gaji" << endl;
    cout << string(60,'=') << endl;
    cout << left << setw(w) << nama << left << setw(w) << stringPosisi << left << setw(w) << tarif << left << setw(w) << GajiTotal << endl;
    cout << string(60,'=') << endl;

    return 0;
}