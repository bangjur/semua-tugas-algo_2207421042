//AZZURI PUTRA MAHENDRA TMJ 1B 2207421042

#include <iostream>
#include <cmath>
using namespace std; 

int main(){
	string hari, pilihan, kendaraan, libur;
	int tarifmobil = 25000, tarifmotor = 15000, tarifmasuk, tarifparkir,jmltiket;
	cout<<"TARIF TIKET DUFAN\n\n";
	cout << " *isi salah satu\n\n";
	cout<<"daftar hari: \n";
	cout<<" 1) senin\t 5) jumat\n";
	cout<<" 2) selasa\t 6) sabtu\n";
	cout<<" 3) rabu  \t 7) minggu\n";
	cout<<" 4) kamis\n\n";
	cout<<"hari *(1/2/3/4/5/6/7)\t\t\t: ";
	cin >> hari;
	cout << "kendaraan *(mobil/motor)\t\t: ";
	cin >> kendaraan;
	if (kendaraan == "MOBIL" or kendaraan == "mobil" or kendaraan == "Mobil") {
			tarifparkir = tarifmobil;
	} else {
			tarifparkir = tarifmotor;
	} 
	if (hari == "1" or hari == "2" or hari == "3" or hari == "4" or hari == "5") {
		cout << "hari libur nasional *(ya/tidak)\t\t: ";
		cin >> libur;
		if (libur=="ya" or libur == "YA" or libur =="Ya") {
			cout << "\nMENU TIKET: \n";
			cout << "1) Annual Pass Dufan (E-card) + 1x kunjungan reguler Ancol\n";
			cout << "2) Six Months Pass Dufan (E-card) + 1x kunjungan reguler Ancol\n";
			cout << "3) Dufan + Ancol (bonus 1 produk Sosro [min. pembelian 4 tiket, berlaku kelipatan])\n";
			cout << "4) Dufan + Ancol\n";
			cout << "5) Dufan + Samudera\n";
			cout << "6) Dufan + Ancol + Gondola\n";
			cout << "7) Six Months Pass Dufan (E-card) + 1x kunjungan reguler Ancol + Gondola\n\n";
			cout << "PILIHAN MENU TIKET *(1/2/3/4/5/6/7)\t: ";
			cin >> pilihan;
			cout << "jumlah tiket\t\t\t\t: ";
			cin >> jmltiket;
			if (pilihan == "1") {
				tarifmasuk = 350000*jmltiket;
			} else if (pilihan == "2") {
				tarifmasuk =295000*jmltiket;
			} else if (pilihan == "3") {
				tarifmasuk =250000*jmltiket;
			} else if (pilihan == "4") {
				tarifmasuk =275000*jmltiket;
			} else if (pilihan == "5") {
				tarifmasuk =315000*jmltiket;
			} else if (pilihan == "6") {
				tarifmasuk =317000*jmltiket;
			} else if (pilihan == "7"){
				tarifmasuk =337000*jmltiket;
			} else {
				cout << "pilih ulang menu sesuai nomor";
				tarifparkir = 0;
				tarifmasuk = 0;
			}
		} else {
			cout << "\nMENU TIKET: \n";
			cout << "1) Annual Pass Dufan (E-card) + 1x kunjungan reguler Ancol\n";
			cout << "2) Six Months Pass Dufan (E-card) + 1x kunjungan reguler Ancol\n";
			cout << "3) Dufan + Ancol (bonus 1 produk Sosro [min. pembelian 4 tiket, berlaku kelipatan])\n";
			cout << "4) Dufan + Ancol\n";
			cout << "5) Six Months Pass Dufan (E-card) + 1x kunjungan reguler Ancol + Gondola\n\n";
			cout << "PILIHAN MENU TIKET *(1/2/3/4/5)\t\t: ";
			cin >> pilihan;
			cout << "jumlah tiket\t\t\t\t: ";
			cin >> jmltiket;
			if (pilihan == "1") {
				tarifmasuk = 350000*jmltiket;
			} else if (pilihan == "2") {
				tarifmasuk =295000*jmltiket;
			} else if (pilihan == "3") {
				tarifmasuk =185000*jmltiket;
			} else if (pilihan == "4") {
				tarifmasuk =250000*jmltiket;
			} else if (pilihan == "5"){
				tarifmasuk =333000*jmltiket;
			} else {
				cout << "pilih ulang menu sesuai nomor";
				tarifparkir = 0;
				tarifmasuk = 0;
			}
		}
		
	} else { 
		cout << "\nMENU TIKET: \n";
		cout << "1) Annual Pass Dufan (E-card) + 1x kunjungan reguler Ancol\n";
		cout << "2) Six Months Pass Dufan (E-card) + 1x kunjungan reguler Ancol\n";
		cout << "3) Dufan + Ancol (bonus 1 produk Sosro [min. pembelian 4 tiket, berlaku kelipatan])\n";
		cout << "4) Dufan + Ancol\n";
		cout << "5) Dufan + Samudera\n";
		cout << "6) Dufan + Ancol + Gondola\n";
		cout << "7) Six Months Pass Dufan (E-card) + 1x kunjungan reguler Ancol + Gondola\n\n";
		cout << "PILIHAN MENU TIKET *(1/2/3/4/5/6/7)\t: ";
		cin >> pilihan;
		cout <<"jumlah tiket\t\t\t\t: ";
		cin >> jmltiket;
		if (pilihan == "1") {
			tarifmasuk = 350000*jmltiket;
		} else if (pilihan == "2") {
			tarifmasuk =295000*jmltiket;
		} else if (pilihan == "3") {
			tarifmasuk =250000*jmltiket;
		} else if (pilihan == "4") {
			tarifmasuk =275000*jmltiket;
		} else if (pilihan == "5") {
			tarifmasuk =315000*jmltiket;
		} else if (pilihan == "6") {
			tarifmasuk =317000*jmltiket;
		} else if (pilihan == "7"){
			tarifmasuk =337000*jmltiket;
		} else {
			cout << "pilih ulang menu sesuai nomor";
			tarifparkir = 0;
			tarifmasuk = 0;
		}
	}
	
	cout << "tarif total\t\t\t\t: "<< tarifparkir+tarifmasuk;
	return 0;
}

