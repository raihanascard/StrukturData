//nilaiMahasiswa.h
#ifndef MAHASISWA_H
#define MAHASISWA_H

#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

float NilaiAkhir(float uts, float uas, float tugas);
void inputData(Mahasiswa &mhs);
void tampilData(const Mahasiswa mhs[], int jumlah);

#endif
