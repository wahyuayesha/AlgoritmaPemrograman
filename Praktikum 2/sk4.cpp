#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int rupiah;
    double kurs, dollar;

    cout << "Jumlah Rupiah : ";
    cin >> rupiah;
    cout << "Kurs Konversi : ";
    cin >> kurs;

    dollar = rupiah / kurs;

    cout << string(30,'-') << endl;
    cout << "Jumlah Rupiah : Rp" << rupiah << endl;
    cout << "Jumlah Dollar : $" << fixed << setprecision(2) << dollar << endl;
    
    return 0;
}

