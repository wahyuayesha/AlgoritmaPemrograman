#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // DEKLARASI VARIABEL
    double lebar, panjang, tinggi, luasTotalDinding, literCat, hargaCat, totalBiaya;

    //INPUT
    cout << "Masukan Lebar (m): " << endl;
    cin >> lebar;
    cout << "Masukan Panjang (m): " << endl;
    cin >> panjang;
    cout << "Masukan Tinggi (m): " << endl;
    cin >> tinggi;
    cout << "Harga Cat (per Liter) : " << endl;
    cin >> hargaCat;
    
    // PERHITUNGAN
    luasTotalDinding = (2 * (panjang + lebar)) * tinggi;
    literCat = luasTotalDinding / 10;
    totalBiaya = literCat * hargaCat; 

    // OUTPUT
    cout << string(40, '=') << endl;
    cout << "Luas Dinding : " << luasTotalDinding << endl;
    cout << "Liter Cat Dibutuhkan : " << literCat << " liter";

    if (literCat < 5) {
        cout << " (Sedikit)" << endl;
    } else if (literCat >= 5 && literCat <= 10) {
        cout << " (Sedang)" << endl;
    } else {
        cout << " (Banyak Cat Dibutuhkan)" << endl;
    }
    
    cout << "Total Biaya : Rp" << fixed << setprecision(2) << totalBiaya;
    return 0;
}