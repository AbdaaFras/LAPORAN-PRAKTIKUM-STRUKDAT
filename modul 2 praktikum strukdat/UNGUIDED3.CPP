#include <iostream>
#include <limits> 
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    
    cout << "Masukkan " << n << " elemen array:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Elemen " << i+1 << ": ";
        cin >> arr[i];
    }

    int nilai_maksimum = arr[0];
    int nilai_minimum = arr[0];
    int total = arr[0]; 

    for (int i = 1; i < n; ++i) {
        if (arr[i] > nilai_maksimum) {
            nilai_maksimum = arr[i];
        }
        if (arr[i] < nilai_minimum) {
            nilai_minimum = arr[i];
        }
        total += arr[i];
    }

    double rata_rata = static_cast<double>(total) / n;

    
    cout << "Nilai maksimum: " << nilai_maksimum << endl;
    cout << "Nilai minimum: " << nilai_minimum << endl;
    cout << "Nilai rata-rata: " << rata_rata << endl;

    return 0;
}
