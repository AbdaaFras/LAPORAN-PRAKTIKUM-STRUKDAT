#include <stdio.h>

struct mahasiswa
{
    const char *name;
    const char *address;
    int  age;
};

int main()
{
    struct mahasiswa mhs1, mhs2;
    mhs1.name = "abda";
    mhs1.address = "brebes";
    mhs1.age = 19;
    mhs2.name = "firas";
    mhs2.address = "banyumas";
    mhs2.age = 22;

    printf("## mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n",mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}