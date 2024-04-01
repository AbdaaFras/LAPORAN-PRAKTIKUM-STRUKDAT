#include <iostream> 
#include <string> 
#include <iomanip>

using namespace std;
class Node
{
public:
int harga; 
    string produk; 
    Node *prev; 
    Node *next;
};

class DoublyLinkedList
{
public:
    Node *head; 
    Node *tail;
    DoublyLinkedList()
{
        head = nullptr; 
        tail = nullptr;
}

// Fungsi untuk menambahkan data produk di akhir list
void tambahProduk(string nama, int harga)
{
    Node *newNode = new Node(); 
    newNode->produk = nama; 
    newNode->harga = harga;
    newNode->next = nullptr;

    if (head == nullptr)
{
    newNode->prev = nullptr; 
    head = newNode;
    tail = newNode;
}

else
{
// Fungsi untuk menambahkan data produk di urutan tertentu berdasarkan index
void certainOrder(string nama, int harga, int index)
{

// Mengubah index dari 1-based menjadi 0-based 
index--;

    Node *newNode = new Node();
    newNode->produk = nama; 
    newNode->harga = harga; 
    newNode->prev = nullptr;
    newNode->next = nullptr;

if (head == nullptr)
{

// List kosong, tambahkan sebagai head 
    head = newNode;
    tail = newNode;
}
else
{

    // Cari node pada index yang diberikan 
    Node *current = head;
    int currentIndex = 0;
    while (current != nullptr && currentIndex < index)
    {
    current = current->next;
    currentIndex++;

}

if (current != nullptr)
{
// Sudah menemukan node pada index yang diberikan, tambahkan newNode di posisi tersebut
    newNode->prev = current->prev; 
    newNode->next = current;
    if (current->prev != nullptr)
{
        current->prev->next = newNode;
}
else
{
        head = newNode;
}
        current->prev = newNode;
}
else
{
// Jika index melebihi panjang list, tambahkan sebagai tail
    tail->next = newNode; 
    newNode->prev = tail; 
    tail = newNode;
}
}
}

int hitungList()
{
    Node *hitung; 
    hitung = head;
    int jumlah = 0;
    while (hitung != NULL)
{
    jumlah++;
    hitung = hitung->next;
}
    return jumlah;

}
void hapusUrutanTertentu(int index)
{
    // Check if index is out of range
    if (index < 1 || index > hitungList())
{
    cout << "Error: Index out of range." << endl; 
    return;
}

// If index is 1, remove the head node
if (index == 1)
{
    if (head == nullptr)
    {
    cout << "Error: List is empty." << endl; 
    return;
}
    Node *temp = head; 
    head = head->next; 
    if (head == nullptr)
{
    tail = nullptr;
}
else
{
    ead->prev = nullptr;
}
delete temp; 
return;
}

// If index is at the end, remove the tail node
if (index == hitungList())
{
    if (tail == nullptr)
{
    cout << "Error: List is empty." << endl; 
    return;
}
    Node *temp = tail; 
    tail = tail->prev; 
    if (tail == nullptr)
{
    head = nullptr;
}
else
{
    ail->next = nullptr;
}
    elete temp; 
    return;
}

// Find the node at the given index and remove it
    Node *current = head; 
    int currentIndex = 1;
    while (currentIndex < index)
{
    current = current->next; 
    currentIndex++;
}
    current->prev->next = current->next;
    current->next->prev = current->prev; 
    delete current;

}

bool update(string oldname, string newname, int newharga)
{

    Node *current = head; 
    while (current != nullptr)
{
    if (current->produk == oldname) // Fix comparison from current->harga to current->produk
{
    current->produk = newname; // Update the product name
    current->harga = newharga; // Update the price
    return true;
}
    current = current->next;
}
    return false;
}

void pop()
{
    if (head == nullptr)
{
    return;
}
    Node *temp = head; 
    head = head->next; 
    if (head != nullptr)
{
    head->prev = nullptr;
}
else
{
    tail = nullptr;
}
    delete temp;
}

void deleteAll()
{
    Node *current = head; 
    while (current != nullptr)
{
    Node *temp = current; 
    current = current->next; 
    delete temp;
}
    head = nullptr; 
    tail = nullptr;
}

void display()
{
Node *current = head;
int number = 1; // Initialize number counter to 1 
cout << left << setw(5) << "No." << setw(15) << "Nama Produk" << setw(10) << "Harga" << endl;
cout << " -----------------------------" << endl;

while (current != NULL)
{
cout << left << setw(5) << number++ << setw(15) << current->produk << setw(10) << current->harga << endl;
current = current->next;
}

cout << "------------------------------" << endl;
}
}
;

void addBaseData(DoublyLinkedList &list)
{
// Adding base data list.tambahProduk("Originote", 60000);
list.tambahProduk("Somethinc", 150000);
list.tambahProduk("Skintific", 100000);
list.tambahProduk("Wardah", 50000);
list.tambahProduk("Hanasui", 30000);
}

int main()
{
DoublyLinkedList list; 
addBaseData(list); 
while (true)
{
  
system("cls");
cout << "Toko Skincare Mas Rusdi Purwokerto" << endl;
cout << " 1. Tambah Data" << endl; 
cout << " 2. Hapus Data" << endl; 
cout << " 3. Update data" << endl;
cout << " 4. Tambah Data Urutan Tertentu" << endl;
cout << " 5. Hapus Data Urutan Tertentu" << endl; 
cout << " 6. Hapus Seluruh Data" << endl;
cout << " 7. Tampilkan Data" << endl; 
cout << " 8. Exit" << endl;
int choice;
cout << "Enter your choice: "; 
cin >> choice;
switch (choice)
{
case 1:
{
int harga; string nama;
cout << "Enter nama produk: "; 
cin.ignore();
getline(cin, nama);
cout << "Enter harga produk: "; cin >> harga; list.tambahProduk(nama, harga); system("pause");
break;
}
case 2:
{
list.pop();
system("pause"); 
break;
}
case 3:
{
int newharga;
    string oldname, newname;
    cout << "Enter old product: "; 
    cin >> oldname;
    cout << "Enter new product: "; 
    cin >> newname;
    cout << "Enter new cost: ";
    cin >> newharga;
    bool updated = list.update(oldname, newname, newharga);
    if (!updated)
{
    cout << "Data not found" << endl;
}
system("pause"); 
break;
}
case 4:
{
int harga, urutan; 
    string nama;
    cout << "Enter nama produk: "; 
    cin.ignore();
    getline(cin, nama);
    cout << "Enter harga produk: "; 
    cin >> harga;
    cout << "Enter urutan ke berapa: "; 
    cin >> urutan;
    list.certainOrder(nama, harga, urutan); 
    system("pause");
    break;
}
case 5:
{
int urutan;
    cout << "Enter urutan ke berapa: "; 
    cin >> urutan; 
    list.hapusUrutanTertentu(urutan); 
    system("pause");
    break;
}
case 6:
{
    list.deleteAll();
    cout << "All data has been deleted." << endl; system("pause");
    break;
}
case 7:
{
    list.display(); 
    system("pause"); 
    break;
}
case 8:
{
    cout << "Terima kasih telah menggunakan program ini." << endl;
    list.deleteAll(); // Clean up memory before exiting 
    exit(0);
}
default:
{
    cout << "Pilihan tidak valid, silakan coba lagi." << endl;
    system("pause"); 
    break;
}
}
}
    return 0;
}
