#include <iostream>
#include "multilist.h"
#include "multilist.cpp"
using namespace std;

int main() {
    listinduk L;
    CreateList(L);

    address A = alokasi(10);
    address B = alokasi(20);
    address C = alokasi(30);

    insertFirst(L, A);
    insertLast(L, B);
    insertLast(L, C);

    insertFirstAnak(A->lanak, alokasiAnak(1001));
    insertLastAnak(A->lanak, alokasiAnak(1002));

    insertFirstAnak(B->lanak, alokasiAnak(2001));

    cout << "Data Multilist:\n";
    printInfo(L);

    cout << "\nMenghapus anak 1002...\n";
    delPAnak(A->lanak, 1002);
    printInfo(L);

    cout << "\nMenghapus induk 20...\n";
    delP(L, 20);
    printInfo(L);

    return 0;
}
