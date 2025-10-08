#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama[5];
    float nilai[5][3];
    float rata[5];
    int terbaik = 0;

    cout << "masukkan nilai mahasiswa : \n";
    for (int i = 0; i < 5; i++) {
        cout << "nama mahasiswa ke-" << i + 1 << " : ";
        cin >> nama[i];

        float total = 0;
        for (int j = 0; j < 3; j++) {
            cout << "nilai " << j + 1 << " : ";
            cin >> nilai[i][j];
            total = total + nilai[i][j];
        }
        rata[i] = total / 3;
    }


    for (int i = 1; i < 5; i++) {
        if (rata[i] > rata[terbaik]) {
            terbaik = i;
        }
    }



    cout << "nama\tnilai 1\tnilai 2\tnilai 3\tRata-rata\tketerangan\n";

    for (int i = 0; i < 5; i++) {
        cout << nama[i] << "\t";
        for (int j = 0; j < 3; j++) {
            cout << nilai[i][j] << "\t";
        }
        cout << rata[i] << "\t";
        if (i == terbaik) {
            cout << "--> Terbaik";
        }
        cout << endl;
    }

}
