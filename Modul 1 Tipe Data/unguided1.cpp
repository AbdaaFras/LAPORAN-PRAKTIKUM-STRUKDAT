#include <iostream>
#include <conio.h>
using namespace std;
class Kubus
{
    public:
    double panjang;
    double luas;
    double tinggi;
};
int main()
{
    Kubus kubus1;
    Kubus kubus2;
    double volume = 0.0;
    //data kubus 1
    kubus1.tinggi = 5.0;
    kubus1.panjang = 7.0;
    kubus1.luas = 2.0;
    //data kubus 2
    kubus2.tinggi = 10.0;
    kubus2.panjang = 14.0;
    kubus2.luas = 12.0;
    //volume dari kubus 1
    volume = kubus1.tinggi * kubus1.panjang * kubus1.luas;
    cout << "volume dari kubus 1 :" << volume << endl;
    //volume dari kubus2
    volume = kubus2.tinggi * kubus2.panjang * kubus2.luas;
    cout << "volume dari kubus 2 :" << volume << endl;
    getch();
}

