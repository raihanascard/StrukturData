#include <iostream>
using namespace std;

int main() {
   float bilangan1, bilangan2;
   
   cout << "Masukan bilangan 1 : ";
   cin >> bilangan1;
   
   cout << "Masukan bilangan 2 : ";
   cin >> bilangan2;

   cout << "Penjumlahan : " << bilangan1 + bilangan2 << endl;
   cout << "Pengurangan : " << bilangan1 - bilangan2 << endl;
   cout << "Perkalian : " << bilangan1 * bilangan2 << endl;
   
   if (bilangan2 == 0)
   {
      cout << "Pembagian : Bilangan kedua tidak boleh 0";
   } else {
      cout << "Pembagian : " << bilangan1 / bilangan2 << endl;
   }
   
}