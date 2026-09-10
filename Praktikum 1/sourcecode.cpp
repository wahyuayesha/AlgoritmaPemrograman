#include <iostream>
using namespace std;

int bmi() {
    // implementasi bbrp jenis tipe data
    string nama; // string
    float bb; // float
    float tb; // float
    string kategori[4] = {"Kurus","Ideal","Overweight","Obesitas"}; // array string

    // output dan input
    cout << "Siapa Nama Kamu?: ";
    cin >> nama;
    cout << "Masukan berat badan: ";
    cin >> bb;
    cout << "Masukan tinggi badan: ";
    cin >> tb;

    // perhitungan bmi
    float bmi = bb / ((tb/100) * (tb/100)); // rumus bmi [berat badan (kg) / (tinggi badan (m) * tinggi badan (m))]

    // menampilkan hasil berdasarkan klasifikasi nilai bmi
    cout << "==== HASIL ====" << endl; 
    cout << "Halo " << nama << "!" << endl; 

    if (bmi <= 0) {
        cout << "Pastikan data yang kamu masukan benar!" << endl;
    } else if (bmi < 18.5) {
        cout << "Kategori badan kamu: " << kategori[0] << endl;
    } else if (bmi <= 24.9) {
        cout << "Kategori badan kamu: " << kategori[1] << endl;
    } else if (bmi <= 29.9) {
        cout << "Kategori badan kamu: " << kategori[2] << endl;
    } else {
        cout << "Kategori badan kamu: " << kategori[3] << endl;
    }
}

int main() {
    bmi();
    return 0;
}
