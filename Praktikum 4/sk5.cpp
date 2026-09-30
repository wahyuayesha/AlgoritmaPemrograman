#include <iostream>
#include <iomanip>
using namespace std;

main(){
    int num;
    num = 12;

    cout << "Faktor-faktor dari " << num << " adalah: ";
    
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }

}
