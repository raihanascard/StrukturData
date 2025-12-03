#include <iostream>
using namespace std;

float hitungRerata(int nilai[], int ukuran) {
    int jumlah = 0;
    for (int i = 0; i < ukuran; i++) {
        jumlah += nilai[i];
    }
    return (float)jumlah / ukuran;
}

void NilaiTertinggiTerendah(int nilai[], int ukuran, int &maks, int &min) {
    maks = nilai[0];
    min = nilai[0];
    for (int i = 1; i < ukuran; i++) {
        if (nilai[i] > maks) maks = nilai[i];
        if (nilai[i] < min) min = nilai[i];
    }
}

int main() {
    int N;
    cout << "masukkan jumlah siswa: ";
    cin >> N;

    int nilai[N]; 

    for (int i = 0; i < N; i++) {
        cout << "nilai siswa ke-" << i + 1 << " : ";
        cin >> nilai[i];
    }


    float rata = hitungRerata(nilai, N);
    int maks, min;
    NilaiTertinggiTerendah(nilai, N, maks, min);

    cout << "rata-rata kelas : " << rata << endl;
    cout << "nilai tertinggi : " << maks << endl;
    cout << "nilai terendah  : " << min << endl;

}
