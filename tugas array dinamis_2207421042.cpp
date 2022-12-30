#include <iostream>
#include <cmath>
using namespace std;

//AZZURI PUTRA MAHENDRA nim 2207421042 kelas TMJ 1B
int main () {
	string ulang, nama;
	int baris, kolom, jumlah_baris, jumlah_kolom;
	int array[10][10];//sebagai deklarasi array awal
	
	do{
		system("cls");//jika anda mau mengulang program ini, output sebelumnya akan terhapus sehingga lebih rapi
	
		cout<<"\n ===TUGAS ARRAY INTEGER=== \n\n";
		cout<<" masukkan nama array anda: ";
		cin>>nama;
		cout<<" masukkan jumlah baris: ";
		cin>>baris;
		cout<<" masukkan jumlah kolom: ";
		cin>>kolom;
		cout<<"\n masukkan nilai untuk array: \n";
		
		for (int i = 1; i<=baris; i++) {//array yang saya buat, indeksnya dimulai dari 1 bukan 0 
		//supaya saya lebih mudah saja dalam menulis source code ini
			for (int j = 1; j<=kolom; j++) {
				cout<<"  baris "<<i<<" kolom "<<j<<" = ";
				cin>>array[i][j];//nilai yang diinput menjadi nilai array[i][j]
			}
		}
		
		cout<<"\n array anda adalah: \n";
		cout<<"  "<<nama<<"["<<baris<<"]"<<"["<<kolom<<"]: \n";
		for (int i=1; i<=baris; i++) {
			jumlah_baris = 0;//pindah baris, maka nilai kembali = 0 supaya tidak tersimpan nilai sebelumnya
			for (int j=1; j<=kolom; j++) {
				cout<<"\t"<<array[i][j];//output berupa nilai2 array berderet 
				jumlah_baris = jumlah_baris+array[i][j];//merupakan rumus hitung jumlah nilai per baris
				if (j == kolom) {
					cout<<" = "<<jumlah_baris; //sebagai jumlah nilai array per baris
					cout<<"\n";//ketika baris pertama selesai, output nilai berikutnya pindah ke bawah
				}
			}
		}	
	
		//ketika seluruh nilai array telah di-output, barulah dihitung jumlah nilai array per kolom
		for (int i = 1; i<=kolom; i++) { 
			jumlah_kolom = 0;//pindah baris, maka nilai kembali = 0 supaya tidak tersimpan nilai sebelumnya
			for (int j = 1; j<=baris; j++) {
				jumlah_kolom = jumlah_kolom+array[j][i];//yang berubah adalah indeks [baris], 
				//sedangkan indeks [kolom] tetap
			}
			cout<<"\t="<<jumlah_kolom;
		}
		
		cout<<"\n ingin mengulangi? (ya/tidak): ";
		cin>>ulang;
	
	} while (ulang == "Y" or ulang == "Ya" or ulang == "ya" or ulang == "y");
	
	return 0;
}
