#include <iostream>
using namespace std;
int main ()
{
    int maks, a, i=1, lokasi;
    cout << "Masukan panjang array:";
    cin >> a;
    int array[a];
    cout << "Masukan" << a << "angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ":";
        cin >> array[i];
    }
    maks = array [0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array [1];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah" << maks << "berada di Array ke" << lokasi <<endl;
}
