#include <iostream>
using namespace std;

int main() {
    int a_size, b_size, c_size;

    cout << "Masukkan ukuran array (a b c): ";
    cin >> a_size >> b_size >> c_size;

    int arr[a_size][b_size][b_size];

    cout << "Masukkan elemen array:\n";
    for (int a = 0; a < a_size; a++) {
        for (int b = 0; b < b_size; b++) {
            for (int c = 0; c < c_size; c++) {
                cout << "Array[" << a << "][" << b << "][" << c << "]: ";
                cin >> arr[a][b][c];
            }
        }
    }

    cout << "Elemen array yang dimasukkan:\n";
    for (int a = 0; a < a_size; a++) {
        for (int b = 0; b < b_size; b++) {
            for (int c = 0; c < c_size; c++) {
                cout << arr[a][b][c] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
