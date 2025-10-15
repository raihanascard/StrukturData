//main.cpp
#include <iostream>
#include "pointer.h"
#include "pointer.cpp"
using namespace std;

int main() {
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int x = 10, y = 20;
    int *p1 = &x;
    int *p2 = &y;

    cout << "sebelum ditukar" << endl;
    cout << "array 1:" << endl;
    tampilArray(array1);
    cout << "array 2:" << endl;
    tampilArray(array2);

    tukarIsiArray(array1, array2, 0, 0);

    cout << "\nsetelah pertukaran" << endl;
    cout << "array 1:" << endl;
    tampilArray(array1);
    cout << "array 2:" << endl;
    tampilArray(array2);


    cout << "\nSebelum tukar pointer:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    tukarPointer(p1, p2);

    cout << "Setelah tukar pointer:" << endl;
    cout << "x = " << x << ", y = " << y << endl;


    return 0;
}
