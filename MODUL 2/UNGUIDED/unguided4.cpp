#include <iostream>
using namespace std;

void polaSegitiga(int n) {
    for (int i = 1; i <= n; i++) {         
        for (int k = 1; k <= i; k++) {    
            cout << k << " ";
        }
        cout << endl; 
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah baris : ";
    cin >> n;

    polaSegitiga(n); 

    return 0;
}
