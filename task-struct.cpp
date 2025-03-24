#include <iostream>
#include <string>  // Tambahkan library untuk getline()

using namespace std;

struct Mahasiswa {
    char npm[11];
    string nama;   // Gunakan string agar mendukung spasi
    string alamat; // Gunakan string agar mendukung spasi
    float ipk;
};

int main() {
    int jumlahMahasiswa;
    cout << "Jumlah mahasiswa yang ingin diinputkan : ";
    cin >> jumlahMahasiswa;
    cin.ignore();  // Menghapus karakter newline agar getline() berfungsi

    Mahasiswa mhs[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Data Mahasiswa ke #" << (i + 1) << endl;
        cout << "  NPM   : ";
        cin >> mhs[i].npm;
        cin.ignore(); // Hapus newline sebelum getline()

        cout << "  Nama  : ";
        getline(cin, mhs[i].nama); // Bisa input dengan spasi

        cout << "  Alamat: ";
        getline(cin, mhs[i].alamat); // Bisa input dengan spasi

        cout << "  IPK   : ";
        cin >> mhs[i].ipk;
        cin.ignore();
        cout << endl;
    }

    cout << "\nLaporan Data Mahasiswa\n======================\n";

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "No. #" << (i + 1) << endl;
        cout << "  NPM   : " << mhs[i].npm << endl;
        cout << "  Nama  : " << mhs[i].nama << endl;
        cout << "  Alamat: " << mhs[i].alamat << endl;
        cout << "  IPK   : " << mhs[i].ipk << endl;
        cout << endl;
    }

    system("pause");
    return 0;
}