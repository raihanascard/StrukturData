//nilaiMahasiswa.cpp
#include <iostream>
#include "NilaiMahasiswa.h"
using namespace std;


float NilaiAkhir(float uts, float uas, float tugas) {
    return 0.3f * uts + 0.4f * uas + 0.3f * tugas;
}


void inputData(Mahasiswa &mhs) {
    cout << "Nama   : ";
    getline(cin, mhs.nama);
    cout << "NIM    : ";
    getline(cin, mhs.nim);
    cout << "nilai UTS   : ";
    cin >> mhs.uts;
    cout << "nilai UAS   : ";
    cin >> mhs.uas;
    cout << "nilai Tugas : ";
    cin >> mhs.tugas;
    cin.ignore(); 

    mhs.nilaiAkhir = NilaiAkhir(mhs.uts, mhs.uas, mhs.tugas);
}


void tampilData(const Mahasiswa mhs[], int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa " << i + 1 << endl;
        cout << "Nama        : " << mhs[i].nama << endl;
        cout << "NIM         : " << mhs[i].nim << endl;
        cout << "UTS         : " << mhs[i].uts << endl;
        cout << "UAS         : " << mhs[i].uas << endl;
        cout << "Tugas       : " << mhs[i].tugas << endl;
        cout << "Nilai Akhir : " << mhs[i].nilaiAkhir << endl;
    }
}
