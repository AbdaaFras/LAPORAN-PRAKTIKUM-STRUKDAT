#include <iostream>
using namespace std;

// Struktur node untuk menyimpan data mahasiswa
struct Mahasiswa {
    string nama;
    int usia;
    Mahasiswa* next;
};

// Kelas untuk linked list
class LinkedList {
private:
    Mahasiswa* head;

public:
    // Konstruktor
    LinkedList() {
        head = NULL;
    }

    // Fungsi untuk memasukkan data mahasiswa di depan linked list
    void insertDepan(string nama, int usia) {
        Mahasiswa* newNode = new Mahasiswa();
        newNode->nama = nama;
        newNode->usia = usia;
        newNode->next = head;
        head = newNode;
    }

    // Fungsi untuk memasukkan data mahasiswa di belakang linked list
    void insertBelakang(string nama, int usia) {
        Mahasiswa* newNode = new Mahasiswa();
        newNode->nama = nama;
        newNode->usia = usia;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Mahasiswa* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Fungsi untuk memasukkan data mahasiswa di tengah linked list setelah node tertentu
    void insertTengah(string nama, int usia, string nama_setelah) {
        Mahasiswa* newNode = new Mahasiswa();
        newNode->nama = nama;
        newNode->usia = usia;

        Mahasiswa* temp = head;
        while (temp != NULL && temp->nama != nama_setelah) {
            temp = temp->next;
        }
        if (temp != NULL) {
            newNode->next = temp->next;
            temp->next = newNode;
        } else {
            cout << "Data " << nama_setelah << " tidak ditemukan" << endl;
        }
    }

    // Fungsi untuk menghapus data mahasiswa
    void hapus(string nama) {
        Mahasiswa* temp = head;
        Mahasiswa* prev = NULL;

        if (temp != NULL && temp->nama == nama) {
            head = temp->next;
            delete temp;
            return;
        }

        while (temp != NULL && temp->nama != nama) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Data " << nama << " tidak ditemukan" << endl;
            return;
        }

        prev->next = temp->next;
        delete temp;
    }

    // Fungsi untuk menampilkan seluruh data mahasiswa
    void tampilkanData() {
        Mahasiswa* temp = head;
        while (temp != NULL) {
            cout << temp->nama << " " << temp->usia << endl;
            temp = temp->next;
        }
    }
};

int main() {
    LinkedList linkedList;

    // Memasukkan data sesuai dengan urutan yang diminta
    linkedList.insertDepan("Abda",19);
    linkedList.insertBelakang("John", 19);
    linkedList.insertBelakang("Jane", 20);
    linkedList.insertBelakang("Michael", 18);
    linkedList.insertBelakang("Yusuke", 19);
    linkedList.insertBelakang("Akechi", 20);
    linkedList.insertBelakang("Hoshino", 18);
    linkedList.insertBelakang("Karin", 18);

    // Menghapus data Akechi
    linkedList.hapus("Akechi");

    // Menambahkan data Futaba di antara John dan Jane
    linkedList.insertTengah("Futaba", 18, "John");

    // Menambahkan data Igor di awal
    linkedList.insertDepan("Igor", 20);

    // Mengubah data Michael menjadi Reyn
    linkedList.hapus("Michael");
    linkedList.insertBelakang("Reyn", 18);

    // Menampilkan seluruh data
    linkedList.tampilkanData();

    return 0;
}