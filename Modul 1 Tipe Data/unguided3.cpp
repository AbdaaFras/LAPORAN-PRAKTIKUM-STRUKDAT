#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> mahasiswa{
        {"dafa", 80},
        {"zaka", 82},
        {"dani", 84},
        {"hana", 86}};
    auto it = mahasiswa.find("hana");

    if (it != mahasiswa.end()){
        cout << "key is present\n" << endl;
    }
    else{
        cout << "key is not present\n";
    }
}

