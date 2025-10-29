#include "doublylist.h"
#include "doublylist.cpp"

int main() {
    List L;
    CreateList(L);

    infotype x;
    char pilih = 'y';


    while (pilih == 'y' || pilih == 'Y') {
        cout << "Masukkan Nomor Polisi : ";
        cin >> x.nopol;
        cout << "Masukkan Warna        : ";
        cin >> x.warna;
        cout << "Masukkan Tahun        : ";
        cin >> x.thnbuat;

        if (isExist(L, x.nopol)) {
            cout << "Nomor polisi sudah terdaftar!\n";
        } else {
            address P = alokasi(x);
            insertLast(L, P);
        }

        cout << "Tambah data lagi? (y/n): ";
        cin >> pilih;
        cout << endl;
    }

    printInfo(L);

    string cari;
    cout << "\nMasukkan Nomor Polisi yang dicari : ";
    cin >> cari;
    address found = findElm(L, cari);
    if (found != NULL) {
        cout << "\nNomor Polisi : " << found->info.nopol << endl;
        cout << "Warna        : " << found->info.warna << endl;
        cout << "Tahun        : " << found->info.thnbuat << endl;
    } else {
        cout << "Data tidak ditemukan!\n";
    }

    string hapus;
    cout << "\nMasukkan Nomor Polisi yang akan dihapus : ";
    cin >> hapus;

    address target = findElm(L, hapus);
    if (target == NULL) {
        cout << "Data tidak ditemukan.\n";
    } else if (target == L.First) {
        address P;
        deleteFirst(L, P);
        dealokasi(P);
        cout << "Data pertama berhasil dihapus.\n";
    } else if (target == L.Last) {
        address P;
        deleteLast(L, P);
        dealokasi(P);
        cout << "Data terakhir berhasil dihapus.\n";
    } else {
        address Prec = target->prev;
        address P;
        deleteAfter(Prec, P);
        dealokasi(P);
        cout << "Data dengan nomor polisi " << hapus << " berhasil dihapus.\n";
    }

    cout << "\nDATA SETELAH PENGHAPUSAN:\n";
    printInfo(L);

    return 0;
}
