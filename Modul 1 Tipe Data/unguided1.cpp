#include <iostream>
using namespace std;

int hitungLuas(int panjang, int lebar){
    return panjang * lebar;
}

int hitungVolume(int sisi){
    return sisi * sisi * sisi;
}

int main(){
    int panjang = 5;
    int lebar = 3;
    int sisi = 2;
    int luas = hitungLuas(panjang, lebar);
    int volume = hitungVolume(sisi);

    cout << "Luas persegi panjang:" << luas << endl;
    cout << "Volume kubus:" << volume << endl;
    return 0;
}

