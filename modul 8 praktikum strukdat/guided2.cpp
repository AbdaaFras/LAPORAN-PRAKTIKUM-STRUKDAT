#include <iostream>
using namespace std;

#include <conio.h>
#include <iomanip>
int nomer[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;
void selection_sort()
{
    int temp, min, i, j;
    for (i = 0; i < 7; i++)
    {
        min = i;
        for (j = i + 1; j < 7; j++)
        {
            if (nomer[j] < nomer[min])
            {
                min = j;
            }
        }
        temp = nomer[i];
        nomer[i] = nomer[min];
        nomer[min] = temp;
    }
}
void binarysearch()
{
    // searching
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 7;
    while (b_flag == 0 && awal <= akhir)
    {
        tengah = (awal + akhir) / 2;
        if (nomer[tengah] == cari)
        {
            b_flag = 1;
            break;
        }
        else if (nomer[tengah] < cari)
            awal = tengah + 1;
        else
            akhir = tengah - 1;
    }
    if (b_flag == 1)
        cout << "\n nomer ditemukan pada index ke- "<<tengah<<endl;
            else cout
             << "\n nomer tidak ditemukan\n";
}
int main()
{
    cout << "\t BINARY SEARCH " << endl;
    cout << "\n nomer : ";
    // tampilkan nomer awal
    for (int x = 0; x < 7; x++)
        cout << setw(3) << nomer[x];
    cout << endl;
    cout << "\n Masukkan nomer yang ingin Anda cari :";
    cin >> cari;
    cout << "\n nomer diurutkan : "; // urutkan nomer dengan selection sort
    selection_sort(); // tampilkan nomer setelah diurutkan
    for (int x = 0; x < 7; x++)
        cout << setw(3) << nomer[x];
    cout << endl;
    binarysearch();
    _getche();
    return EXIT_SUCCESS;
}
