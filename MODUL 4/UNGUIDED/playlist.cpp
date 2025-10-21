//playlist.cpp
#include "playlist.h"

playlist::playlist() {
    head = nullptr;
}

playlist::~playlist() {
    lagu* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

void playlist::tambahAwal(string judul, string penyanyi, float durasi) {
    lagu* baru = new lagu{judul, penyanyi, durasi, head};
    head = baru;
    cout << "Lagu \"" << judul << "\" berhasil ditambahkan di awal playlist.\n";
}

void playlist::tambahAkhir(string judul, string penyanyi, float durasi) {
    lagu* baru = new lagu{judul, penyanyi, durasi, nullptr};

    if (head == nullptr) {
        head = baru;
    } else {
        lagu* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = baru;
    }
    cout << "Lagu \"" << judul << "\" berhasil ditambahkan di akhir playlist.\n";
}

void playlist::tambahSetelahPlaylist3(string judul, string penyanyi, float durasi) {
    lagu* baru = new lagu{judul, penyanyi, durasi, nullptr};
    lagu* temp = head;
    int posisi = 1;

    while (temp != nullptr && posisi < 3) {
        temp = temp->next;
        posisi++;
    }

    if (temp == nullptr) {
        cout << "Playlist kurang dari 3 lagu, tidak bisa menambah setelah ke-3.\n";
        delete baru;
    } else {
        baru->next = temp->next;
        temp->next = baru;
        cout << "Lagu \"" << judul << "\" berhasil ditambahkan setelah lagu ke-3.\n";
    }
}

void playlist::hapusLagu(string judul) {
    if (head == nullptr) {
        cout << "Playlist kosong.\n";
        return;
    }

    lagu* temp = head;
    lagu* prev = nullptr;

    while (temp != nullptr && temp->judul != judul) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Lagu \"" << judul << "\" tidak ditemukan dalam playlist.\n";
        return;
    }

    if (prev == nullptr) {
        head = head->next;
    } else {
        prev->next = temp->next;
    }

    delete temp;
    cout << "Lagu \"" << judul << "\" berhasil dihapus.\n";
}

void playlist::tampilSeluruhLagu() {
    if (head == nullptr) {
        cout << "Playlist kosong.\n";
        return;
    }

    lagu* temp = head;
    int no = 1;

    cout << "\n=== Daftar Lagu dalam Playlist ===\n";
    while (temp != nullptr) {
        cout << no++ << ". Judul: " << temp->judul
             << " | Penyanyi: " << temp->penyanyi
             << " | Durasi: " << temp->durasi << " menit\n";
        temp = temp->next;
    }
    cout << "=================================\n";
}
