#include <iostream>
using namespace std;

int main()
{
    int data[] = {9, 4, 1, 8, 8, 10, 5, 4, 12, 4, 7, 4, 8, 2, 3, 6, 8, 7, 6, 4, 3, 2, 4, 2, 8};
    int size = sizeof(data) / sizeof(data[0]); //Mendapatkan ukuran array 
    int target = 8;
    int count = 0; // Variabel untuk menghitung jumlahkemunculan angka 4 
    for (int i = 0; i < size; i++)
    {
        if (data[i] == target)
        {
            count++;
        }
    }
    cout << "Jumlah angka 8 dalam data ini: " << count << endl;
    return 0;
}