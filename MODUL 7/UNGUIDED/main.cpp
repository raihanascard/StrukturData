#include <iostream>
#include "stack.h"
#include "stack.cpp"
using namespace std;

int main() {
    Stack S;

    // ===== BAGIAN 1 =====
    cout << "Hello world!" << endl;
    createStack(S);

    // langsung isi stack tanpa input
    push(S, 9);
    push(S, 2);
    push(S, 4);
    push(S, 3);
   
    cout << "4729601" << endl;
    printInfo(S);

    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);
    cout << endl;

    // ===== BAGIAN 2 =====
    cout << "Hello world!" << endl;
    createStack(S);

    push(S, 9);
    push(S, 8);
    push(S, 4);
    push(S, 3);
    push(S, 3);
    push(S, 2);

    cout << "5839247" << endl;
    printInfo(S);

    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);
    cout << endl;

    // ===== BAGIAN 3 =====
    cout << "Hello world!" << endl;
    createStack(S);

    // baru bagian ini pakai input user
    getInputStream(S);
    printInfo(S);

    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);

    return 0;
}
