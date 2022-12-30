#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int nosoal, kunjung, harga, tipe, jmldepo;
	string libnas, depo;
	int jmltiket1, jmltiket2, jmltiket3, jmltiket4, har1, har2, har3, har4;
	
	cout<<"SOAL TUGAS UTS: \n";
	cout<<"1) SAFARI TREK & OUTBOND\n";
	cout<<"2) HARGA TIKET MASUK\n";
	cout<<"3) BEHIND THE SCENE TOUR\n";
	cout<<"4) HARGA TIKET MASUK MALAM HARI\n\n";
	
	do {
		cout<<"pilih salah satu: ";
		cin>>nosoal;
	}
	while (nosoal>4);
				
	switch (nosoal) {
		//SOAL NOMOR 1
		case 1 :{
			cout<<"\n===PROGRAM SAFARI TREK & OUTBOND===";
			cout<<"\n\n*Program ini minimal dipesan untuk 25 orang\n\n"; 
			cout<<"FASILITAS: "; //penjelasan mengenai fasilitas
			cout<<"\n1) kegiatan hiking (menyusuri hutan Gunung Gede Pangrango)\n";
			cout<<"2) wahana outbond\n";
			cout<<"3) SFC lunch box\n";
			cout<<"4) snack box\n\n";
			cout<<"mau pesan untuk berapa orang? (isi dengan angka saja): ";
			cin>>jmltiket1;
			if (jmltiket1<25) {
				cout<<"*anda tidak bisa memesan tiket karena kekurangan orang"; //sesuai dgn syarat min. 25 orang
			} else {
				cout<<"tarif tiket: "<<150000*jmltiket1;
			}
			break;
		}
		
		//SOAL NOMOR 2
		case 2: {
			cout<<"\n===HARGA TIKET MASUK===\n\n";
			cout<<"pilih hari kunjungan: \n";
			cout<<"1) senin   5) jumat\n";
			cout<<"2) selasa  6) sabtu\n";
			cout<<"3) rabu    7) minggu\n";
			cout<<"4) kamis\n\n";
			do {
				cout<<"pilihan anda (isi dengan nomornya saja): ";
				cin>>kunjung;
			}
			while (kunjung>7);
			
			har1 = 230000;
			har2 = 200000;
			har3 = 400000;
			har4 = 350000;
			
			if (kunjung<6) { //weekdays adalah hari dari senin s.d jumat
				cout<<"\napakah hari libur nasional? \n"; //mungkin saja libur nasional terjadi saat weekdays
				cout<<"(ketik 'y' apabila ya, ketik 't' apabila tidak): ";
				cin>>libnas; 
				
				if (libnas=="y" or libnas=="t" or libnas=="Y" or libnas=="T") {
					if (libnas=="y" or libnas=="Y") {
						har1 = 255000;
						har2 = 225000;
					}
				} else {
					cout<<"*mohon isi sesuai instruksi";
					break;
				}
			}
			cout<<"TIPE WISATAWAN: domestic & international\n";
			cout<<" 1) DOMESTIC |\n";
			cout<<"    jumlah pemesanan tiket\n";
			cout<<"    -usia 6 tahun ke atas (ketik '0' jika tidak memesan): ";
			cin>>jmltiket1;
			cout<<"    -usia 5 tahun ke bawah (ketik '0' jika tidak memesan): ";
			cin>>jmltiket2;
			cout<<"\n 2) INTERNATIONAL |\n";
			cout<<"    jumlah pemesanan tiket\n";
			cout<<"    -usia 6 tahun ke atas (ketik '0' jika tidak memesan): ";
			cin>>jmltiket3;
			cout<<"    -usia 5 tahun ke bawah (ketik '0' jika tidak memesan): ";
			cin>>jmltiket4;
			cout<<"\ntarif tiket: "<<jmltiket1*har1+jmltiket2*har2+jmltiket3*har3+jmltiket4*har4;
					
			break;
		}
			
		//SOAL NOMOR 3
		case 3:
		cout<<"\n===PROGRAM BEHIND THE SCENE TOUR===\n";
		cout<<"*program khusus VVIP 1.000.000/pax\n\n"; //memilih paket ini berarti bersedia membayar biaya VVIP
		cout<<"syarat dan ketentuan: \n";
		cout<<"1) hanya berlaku hari senin s/d jumat\n"; //pada hari sabtu dan minggu program ini tidak tersedia
		cout<<"2) minimal 5 pax dan maksimal 15 pax\n";
		cout<<"3) harus melakukan reservasi dan deposit terlebih dulu\n\n";
		cout<<"fasilitas:\n";
		cout<<"1) mengunjungi rumah sakit satwa, ruang nursery, ruang patologi, exhibit arena, \n";
		cout<<"   pusat penangkaran gajah, pusat penangkaran harimau dan genome resource bank\n";
		cout<<"2) safari journey + pemandu + tiket terusan panda\n";
		cout<<"3) makan pilihan makan siang (termasuk jus atau kopi) + snack box\n";
		cout<<"4) reservasi tempat duduk di animal show\n";
		cout<<"5) disediakan tempat parkir\n";
		
		cout<<"\ningin membuka deposito? \n";
		cout<<"(ketik 'y' apabila ya, ketik 't' apabila tidak): ";
		cin>>depo;
		if (depo=="y" or depo=="t" or depo=="Y" or depo=="T") {
			if (depo == "t" or depo=="T") {
				cout<<"*anda harus mendepositkan uang terlebih dahulu";
				break;
			}
		
			cout<<"\nberapa jumlah deposito anda? (isi dengan angka saja): ";
			cin>>jmldepo;
	
			cout<<"\nmau memesan berapa tiket? (isi dengan angka saja): ";
			cin>>jmltiket1;
			if (jmldepo< jmltiket1*1000000) {
				cout<<"*maaf, uang deposito anda kurang. Silahkan depositkan lebih dari semula.";
				break;
			} else {
				if (jmltiket1>15) {
					cout <<"maksimal pemesanan 15 tiket";
				} else if (jmltiket1 > 5) {
					cout<<"TOTAL HARGA: "<<1000000*jmltiket1;
				} else {
					cout<<"minimal pemesanan 5 tiket";
				}
				break;
			}
		} else {
			cout<<"*mohon isi sesuai instruksi";
			break;
		}
		
		//SOAL NOMOR 4
		case (4):
		cout<<"\n===PROGRAM HARGA TIKET MASUK SAFARI MALAM===\n";
		cout<<"isi dengan angka saja\n";
		cout<<"\nPILIHAN PAKET: domestic & international\n";
		cout<<" 1) DOMESTIC |\n";
		cout<<"    jumlah pemesanan tiket\n";
		cout<<"    -usia 6 tahun ke atas (ketik '0' jika tidak memesan): ";
		cin>>jmltiket1;
		cout<<"    -usia 5 tahun ke bawah (ketik '0' jika tidak memesan): ";
		cin>>jmltiket2;
		cout<<"\n 2) INTERNATIONAL |\n";
		cout<<"    jumlah pemesanan tiket\n";
		cout<<"    -usia 6 tahun ke atas (ketik '0' jika tidak memesan): ";
		cin>>jmltiket3;
		cout<<"    -usia 5 tahun ke bawah (ketik '0' jika tidak memesan): ";
		cin>>jmltiket4;
		cout<<"\ntarif tiket: "<<jmltiket1*180000+jmltiket2*160000+jmltiket3*350000+jmltiket4*300000;
		
	}
	
	return 0;
}
