#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int no_rekening, pemakaian_bulan_lalu, pemakaian_bulan_ini, pemakaian, biaya_beban, biaya_tarif, pajak;
  string nama_pelanggan;

  // Input data
  cout << "No. rekening: ";
  cin >> no_rekening;
  cout << "Nama pelanggan: ";
  getline(cin, nama_pelanggan);
  cout << "Pemakaian bulan lalu: ";
  cin >> pemakaian_bulan_lalu;
  cout << "Pemakaian bulan ini: ";
  cin >> pemakaian_bulan_ini;

  // Hitung pemakaian
  pemakaian = pemakaian_bulan_ini - pemakaian_bulan_lalu;

  // Hitung biaya tarif
  if (pemakaian <= 20) {
    biaya_tarif = pemakaian * 500;
  } else if (pemakaian <= 60) {
    biaya_tarif = 20 * 500 + (pemakaian - 20) * 800;
  } else {
    biaya_tarif = 20 * 500 + 40 * 800 + (pemakaian - 60) * 1000;
  }

  // Hitung biaya beban
  biaya_beban = 30000;

  // Hitung pajak pemakaian
  pajak = biaya_tarif * 0.1;

  // Hitung total tagihan
  int total_tagihan = biaya_tarif + biaya_beban + pajak;

  // Output
  cout << endl;
  cout << "No. rekening: " << no_rekening << endl;
  cout << "Nama pelanggan: " << nama_pelanggan << endl;
  cout << "Pemakaian bulan ini: " << pemakaian << " kWh" << endl;
  cout << "Biaya tarif: Rp " << biaya_tarif << endl;
  cout << "Biaya beban: Rp " << biaya_beban << endl;
  cout << "Pajak pemakaian: Rp " << pajak << endl;
  cout << "Total tagihan: Rp " << total_tagihan << endl;

  return 0;
}