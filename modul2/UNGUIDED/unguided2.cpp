#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "masukkan jumlah bilangan: ";
    cin >> N;

    int angka[100]; 

    for (int i = 0; i < N; i++) {
        cout << "bilangan ke-" << i + 1 << " : ";
        cin >> angka[i];
    }

    int jumlah = 0;
    int maks = angka[0];
    int min = angka[0];


    for (int i = 0; i < N; i++) {
        jumlah += angka[i];
        if (angka[i] > maks) maks = angka[i];
        if (angka[i] < min) min = angka[i];
    }

    cout << "jumlah : " << jumlah << endl;
    cout << "nilai maksimum : " << maks << endl;
    cout << "nilai minimum  : " << min << endl;

    return 0;
}
