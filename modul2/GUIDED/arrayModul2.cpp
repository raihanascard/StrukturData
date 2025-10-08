#include <iostream>
using namespace std;

int main() {
  int x, y;
  int *px;
  
  x = 87;
  px = &x;
  y = *px;

   cout << "Menampilkan alamat x : " << &x << endl;
   cout << "Menampilkan value px : " << px << endl;
   cout << "Menampilkan isi x : " << x << endl;
   cout << "Menampilkan value pointer px (*px) : " << *px << endl;
   cout << "Menampilkan value y : " << y << endl;


}
