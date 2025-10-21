//playlist.h
#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <iostream>
#include <string>
using namespace std;

struct lagu {
   string judul;
   string penyanyi;
   float durasi;
   lagu* next;

};

class playlist {
private :
    lagu* head;

public : 
    playlist();
    ~playlist();
    void tambahAwal(string judul, string penyanyi, float durasi);
    void tambahAkhir(string judul, string penyanyi, float durasi);
    void tambahSetelahPlaylist3(string judul, string penyanyi, float durasi);
    void hapusLagu(string judul);
    void tampilSeluruhLagu();
};


#endif