#include "circularlist.h"

void CreateList(List &L) {
    L.First = NULL;
}

address alokasi(infotype x) {
    address P = new ElmList;
    if (P != NULL) {
        P->info = x;
        P->next = P; // circular
    }
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = NULL;
}

void insertFirst(List &L, address P) {
    if (L.First == NULL) {
        L.First = P;
        P->next = P;
    } else {
        address Q = L.First;
        while (Q->next != L.First) Q = Q->next;
        Q->next = P;
        P->next = L.First;
        L.First = P;
    }
}

void insertAfter(List &L, address Prec, address P) {
    if (Prec != NULL) {
        P->next = Prec->next;
        Prec->next = P;
    }
}

void insertLast(List &L, address P) {
    if (L.First == NULL) {
        L.First = P;
        P->next = P;
    } else {
        address Q = L.First;
        while (Q->next != L.First) Q = Q->next;
        Q->next = P;
        P->next = L.First;
    }
}

void deleteFirst(List &L, address &P) {
    if (L.First != NULL) {
        P = L.First;
        if (P->next == P) {
            L.First = NULL;
        } else {
            address Q = L.First;
            while (Q->next != L.First) Q = Q->next;
            L.First = P->next;
            Q->next = L.First;
        }
        P->next = NULL;
    }
}

void deleteAfter(List &L, address Prec, address &P) {
    if (Prec != NULL && Prec->next != NULL) {
        P = Prec->next;
        Prec->next = P->next;
        P->next = NULL;
    }
}

void deleteLast(List &L, address &P) {
    if (L.First != NULL) {
        address Q = L.First;
        if (Q->next == Q) {
            P = Q;
            L.First = NULL;
        } else {
            while (Q->next->next != L.First) Q = Q->next;
            P = Q->next;
            Q->next = L.First;
        }
        P->next = NULL;
    }
}

address findElm(List L, string nim) {
    if (L.First == NULL) return NULL;
    address P = L.First;
    do {
        if (P->info.nim == nim) return P;
        P = P->next;
    } while (P != L.First);
    return NULL;
}

void printInfo(List L) {
    if (L.First == NULL) {
        cout << "List kosong" << endl;
        return;
    }
    address P = L.First;
    do {
        cout << P->info.nama << " | " << P->info.nim << " | "
             << P->info.jenis_kelamin << " | " << P->info.ipk << endl;
        P = P->next;
    } while (P != L.First);
}
