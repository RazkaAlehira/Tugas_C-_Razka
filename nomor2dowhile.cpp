#include <iostream>

using namespace std;

int main() {
  // Inisialisasi variabel
  int i = 3;

  // Perulangan do While
  do {
    // Cetak bilangan ganjil
    cout << i << endl;

    // Increment i
    i += 3;
  } while (i < 31);

  return 0;
}