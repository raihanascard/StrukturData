#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string NIM;
};

int main() {
    Mahasiswa mhs;
    mhs.nama = "Raihan Dzaky Muflih";
    mhs.NIM = "103112430029";

    cout << "Nama : " << mhs.nama << endl << "NIM : " << mhs.NIM;
}