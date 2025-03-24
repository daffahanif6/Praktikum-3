#include <iostream>

using namespace std;

struct Karyawan {
    int karyawanID;
    int umur;
    float gaji;
};

// Fungsi untuk input data karyawan
void inputDataKaryawan(Karyawan &k) {
    cout << "ID    = "; cin >> k.karyawanID;
    cout << "Umur  = "; cin >> k.umur;
    cout << "Gaji  = "; cin >> k.gaji;
}

// Fungsi untuk mencetak data karyawan
void cetakDataKaryawan(const Karyawan &k) {
    cout << "ID    = " << k.karyawanID << "\n";
    cout << "Umur  = " << k.umur << "\n";
    cout << "Gaji  = " << k.gaji << "\n";
}

// Fungsi untuk menghitung total gaji
float getTotalGaji(const Karyawan &k1, const Karyawan &k2) {
    return k1.gaji + k2.gaji;
}

int main() {
    Karyawan joko, paijo;

    // Input data karyawan
    cout << "Input data karyawan\n==================\n";
    inputDataKaryawan(joko);

    cout << "\nInput data karyawan\n==================\n";
    inputDataKaryawan(paijo);

    // Output data karyawan
    cout << "\nData karyawan\n==================\n";
    cetakDataKaryawan(joko);

    cout << "\nData karyawan\n==================\n";
    cetakDataKaryawan(paijo);

    // Hitung total gaji
    float totalGaji = getTotalGaji(joko, paijo);
    cout << "\nTotal gaji joko dan paijo = " << totalGaji << endl;

    system("pause");
    return 0;
}