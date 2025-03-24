#include <iostream>
using namespace std;

struct Karyawan{
    int karyawanID;
    int umur;
    float gaji;
};

int main() {
    Karyawan joko;
    joko.karyawanID = 10;
    joko.umur = 25;
    joko.gaji = 24.15;

    Karyawan paijo =  {11, 26, 28.23};

    float totalGaji = joko.gaji + paijo.gaji;
    cout << "Total Gaji Joko dan Paijo =" << totalGaji << endl;

    if (paijo.gaji > joko.gaji)
        cout << "Gaji paijo lebih besar dari joko" << endl;

    joko.gaji += 2.5;
    cout << "Gaji joko setelah kenaikan gaji = " << joko.gaji << endl << endl;

    system("pause");
    return 0;
}