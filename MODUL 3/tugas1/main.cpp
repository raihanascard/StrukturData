//main.cpp
#include <iostream>
#include "nilaiMahasiswa.h"
#include "nilaiMahasiswa.cpp"
using namespace std;

int main() {
    Mahasiswa data[10];
    int jumlah;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> jumlah;
    cin.ignore();

    if (jumlah > 10) jumlah = 10;

    for (int i = 0; i < jumlah; i++) {
        cout << "\nmahasiswa " << i + 1 << endl;
        inputData(data[i]);
    }

    tampilData(data, jumlah);
    return 0;
}
