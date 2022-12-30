//AZZURI PUTRA MAHENDRA TMJ 1B 2207421042

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, tarif, jamke, berapajam, tarifinap, lebihan, inaphari;
	string inap, karcishilang;
	cout << "TARIF PARKIR\n\n";
	cout<< " *isi salah satu\n\n";
	cout << "kendaraan roda *(2/4/6)\t\t: ";
	cin >> n;
	if (n == 2) {
		tarif = 3000;
		tarifinap = 25000;
		cout << "karcis hilang *(ya/tidak)\t: ";
		cin >> karcishilang;
		if (karcishilang == "ya" or karcishilang=="YA" or karcishilang=="Ya") {
			tarif = tarif+50000;
		} 
		cout << "parkir inap *(ya/tidak)\t\t: ";
		cin >> inap;
		if (inap == "ya" or inap=="Ya" or inap=="YA") {
			tarif = tarifinap;
			cout<< "inap berapa hari (isi dengan angka)\t: ";
			cin>> inaphari;
			cout<<"berapa jam setelah inap (isi dengan 0-23)\t: ";
			cin>>lebihan;
			tarif = tarifinap*inaphari+3000;
		} 
		if ((karcishilang=="ya" or karcishilang=="YA" or karcishilang=="Ya") 
		and (inap=="ya" or inap=="Ya" or inap=="YA")) {
			tarif = tarifinap*inaphari+3000+50000;
		} 
	}
	if (n == 4) {
		tarif = 6000;
		tarifinap = 50000;
		cout << "karcis hilang *(ya/tidak)\t: ";
		cin >> karcishilang;
		if (karcishilang=="ya" or karcishilang=="YA" or karcishilang=="Ya") {
			tarif = tarif+100000;
		}
		cout << "parkir inap *(ya/tidak)\t\t: ";
		cin >> inap;
		if (inap=="ya" or inap=="Ya" or inap=="YA") {
			tarif = tarifinap;
			cout<< "inap berapa hari (isi dengan angka)\t: ";
			cin>> inaphari;
			cout<<"inap lebih berapa jam (isi dengan 0-23)\t: ";
			cin>>lebihan;
			if (lebihan > 12) {
				tarif = tarifinap*inaphari+55000;
			} else if (lebihan > 5){
				tarif = tarifinap*inaphari+25000;
			} else {
				tarif = tarifinap*inaphari+6000+2000*(lebihan-1);
			}
		} else {
			cout << "sudah berapa jam (isi dengan angka)\t: ";
			cin >> berapajam;
			if (berapajam > 12) {
			tarif = 55000;
			} else if (berapajam > 5) {
			tarif = 25000;	
			} else {
			tarif = tarif+2000*(berapajam-1);
			}
		}
		if ((karcishilang=="ya" or karcishilang=="YA" or karcishilang=="Ya") 
		and (inap=="ya" or inap=="Ya" or inap=="YA")) {
			tarif = tarif+50000;
		} 
	}
	if (n == 6) {
		tarif = 8000;
		tarifinap =70000;
		cout << "karcis hilang *(ya/tidak)\t: ";
		cin >> karcishilang;
		if (karcishilang=="ya" or karcishilang=="YA" or karcishilang=="Ya") {
			tarif = tarif+100000;
		} 
		cout << "parkir inap *(ya/tidak)\t\t: ";
		cin >> inap;
		if (inap=="ya" or inap=="Ya" or inap=="YA") {
			tarif = tarifinap;
			cout<< "inap berapa hari (isi dengan angka)\t: ";
			cin>> inaphari;
			cout<<"inap lebih berapa jam (isi dengan 0-23)\t: ";
			cin>>lebihan;
			if (lebihan > 12) {
				tarif = tarifinap*inaphari+70000;
			} else if (lebihan > 5){
				tarif = tarifinap*inaphari+35000;
			} else {
				tarif = tarifinap*inaphari+8000+3500*(lebihan-1);
			}
		} else {
			cout << "sudah berapa jam\t\t: ";
			cin >> berapajam;
			if (berapajam > 12) {
			tarif = 70000;
			} else if (berapajam > 5) {
			tarif = 35000;	
			} else {
			tarif = tarif+3500*(berapajam-1);
			}
		}
		if ((karcishilang=="ya" or karcishilang=="YA" or karcishilang=="Ya") 
		and (inap=="ya" or inap=="Ya" or inap=="YA")) {
			tarif = tarif+100000;
		} 
	}
	cout << "tarif\t\t\t\t: "<< tarif;
	return 0;
}
