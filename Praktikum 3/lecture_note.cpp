#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int nilai;

    cout << "Masukan Nilai: ";
    cin >> nilai;

    // if (kodeProgram == 1) {
    //     cout << "MBG" << endl;
    // } else if (kodeProgram == 2) {
    //     cout << "IKN" << endl;
    // } else if (kodeProgram == 3) {
    //     cout << "Kopdes" << endl;
    // } else if (kodeProgram == 4) {
    //     cout << "Sawitt" << endl;
    // } else if (kodeProgram == 5) {
    //     cout << "AI" << endl;
    // } else if (kodeProgram == 6) {
    //     cout << "Hilirisasi" << endl;
    // } else {
    //     cout << "Kode Yang Dimasukan Salah" << endl;
    // }

    // switch (kodeProgram) 
    // {
    //     case 1:
    //         cout << "MBG" << endl;
    //         break;
    //     case 2:
    //         cout << "IKN" << endl;
    //         break;
    //     case 3:
    //         cout << "Kopdes" << endl;
    //         break;
    //     case 4:
    //         cout << "Sawitt" << endl;
    //         break;
    //     case 5:
    //         cout << "AI" << endl;
    //         break;
    //     case 6:
    //         cout << "Hilirisasi" << endl;
    //         break;
    // }

    string grade = (nilai >= 90) ? "A" : (nilai >= 80) ? "B" : (nilai >= 70) ? "C" : (nilai >= 60) ? "D" : "E";
    cout << "Hasil : Grade " << grade << endl;

    return 0;
}