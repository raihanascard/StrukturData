//mahasiswa.cpp
#include "mahasiswa.h"
#include <iostream>
using namespace std;

void inputMhs(mahasiswa &m) {
cout << "input nama : ";
cin >> (m).nim;
cout << "masukan nilai 1 : ";
cin >> (m).nilai1;
cout << "masukan nilai 2 : ";
cin >> (m).nilai2;

}
float rata2(mahasiswa m) {
    return float(m.nilai1 + m.nilai2) / 2;
}