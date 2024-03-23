#include <iostream>
using namespace std;

int main() {

    cout << "NAMA: ABDA FIRAS RAHMAN " << endl;
    cout << "NIM : 2311102049 " << endl;
    
    int angka[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Data array :";
    for (int i = 0; i < 10; ++i) {
        cout << " " << angka[i];
    }
    cout << endl;

    cout << "Nomor genap :";
    for (int i = 0; i < 10; ++i) {
        if (angka[i] % 2 == 0) {
            cout << " " << angka[i];
        }
    }
    cout << endl;

    cout << "Nomor ganjil :";
    for (int i = 0; i < 10; ++i) {
        if (angka[i] % 2 != 0) {
            cout << " " << angka[i];
        }
    }
    cout << endl;

    return 0;
}
