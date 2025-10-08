#include <iostream>
using namespace std;

 int maks3(int a, int b, int c);

int main() {
   int x, y, z;
   cout << "Masukkan bilangan ke 1 : ";
   cin >> x;
   cout << "Masukkan bilangan ke 2 : ";
   cin >> y;
   cout << "Masukkan bilangan ke 3 : ";
   cin >> z;

   cout << "Nilai maksimumnya adalah = " << maks3(x, y, z);

}

int maks3(int a, int b, int c) {
     int temp_max = a;

     if (b > temp_max)
     {
        temp_max = b;
     }
      if (c > temp_max)
     {
        temp_max = c;
     }
    return temp_max;
     
}