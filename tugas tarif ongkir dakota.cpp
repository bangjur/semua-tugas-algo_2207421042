#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int harga, kota;
	float p, l, t, b;
	cout<<"TARIF ONGKOS KIRIM DAKOTA KARGO\n\n";
	cout<< "nomor kota tujuan: \n";
	cout<< " 1) bandung\t 6) denpasar \n 2) banyuwangi\t 7) jakarta \n 3) bekasi\t 8) jember \n";
	cout<< " 4) cianjur\t 9) jombang \n 5) cirebon\t 10) kediri\n";
	cout<< "PILIH NOMOR: ";
	cin>> kota;
	cout<< "\n"<<"DIMENSI BARANG (cm) \n";
	cout<<"panjang : ";
	cin>>p;
	cout<<"lebar \t: ";
	cin>>l;
	cout<<"tinggi \t: ";
	cin>>t;
	cout<<"\nberat hitungan \t: ";
	b = p*l*t*0.00025;
	cout<<b<<"\n";
	if (kota == 1) {
		if (b <= 20) {
			harga = 24000;
		} else {
			harga = 24000+2900*(b-20);
		}
	} else if (kota == 2) {
		if (b <= 20) {
			harga = 89000;
		} else {
			harga = 89000+4450*(b-20);
		}
	} else if (kota == 3) {
		if (b <= 20) {
			harga = 53000;
		} else {
			harga = 53000+2650*(b-20);
		}
	} else if (kota == 4) {
		if (b <= 20) {
			harga = 28000;
		} else {
			harga = 28000+1400*(b-20);
		}
	} else if (kota == 5) {
		if (b <= 20) {
			harga = 58000;
		} else {
			harga = 58000+2900*(b-20);
		}
	} else if (kota == 6) {
		if (b <= 20) {
			harga = 67000;
		} else {
			harga = 67000+3350*(b-20);
		}
	} else if (kota == 7) {
		if (b <= 20) {
			harga = 29000;
		} else {
			harga = 29000+1450*(b-20);
		}
	} else if (kota == 8) {
		if (b <= 20) {
			harga = 61000;
		} else {
			harga = 61000+3050*(b-20);
		}
	} else if (kota == 9) {
		if (b <= 20) {
			harga = 78000;
		} else {
			harga = 78000+3900*(b-20);
		}
	} else if (kota == 10) {
		if (b <= 20) {
			harga = 80000;
		} else {
			harga = 80000+4000*(b-20);
		}
	}
	cout<<"harga ongkir\t: "<<harga;
	return 0;
}
