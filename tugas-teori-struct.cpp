#include <iostream>
#include <string>
using namespace std;

// Mendefinisikan struct Identitas untuk menyimpan data diri
struct Identitas {
    string nama;
    int umur;
    string alamat;
    string jurusan;
};

int main() {
    Identitas saya;

    // Input data diri
    cout << "Masukkan Nama      : ";
    getline(cin, saya.nama);

    cout << "Masukkan Umur      : ";
    cin >> saya.umur;
    cin.ignore(); // Mengabaikan karakter newline setelah input umur

    cout << "Masukkan Alamat    : ";
    getline(cin, saya.alamat);

    cout << "Masukkan Jurusan   : ";
    getline(cin, saya.jurusan);

    // Menampilkan data diri
    cout << "\n=== Data Diri Anda ===" << endl;
    cout << "Nama      : " << saya.nama << endl;
    cout << "Umur      : " << saya.umur << " tahun" << endl;
    cout << "Alamat    : " << saya.alamat << endl;
    cout << "Jurusan   : " << saya.jurusan << endl;

    return 0;
}
