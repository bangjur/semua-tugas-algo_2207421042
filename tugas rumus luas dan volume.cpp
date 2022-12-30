#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int p, l, t, a, r, s, t_a;
	cout <<"TUGAS ALGORITMA RUMUS MATEMATIKA BANGUN RUANG\n\n";
	cout <<"bangun kubus\n";
	cout << "rusuk = ";
	cin >> r;
	cout << "volume kubus = "<< r*r*r;
	cout << "\nluas permukaan = "<< r*r*6;
	cout << "\n\n";
	cout <<"bangun balok \n";
	cout<< "panjang= ";
	cin >> p;
	cout << "lebar= ";
	cin >> l;
	cout << "tinggi= ";
	cin >> t;
	cout << "volume balok = "<< p*l*t << "\n";
	cout << "luas permukaan balok = "<<2*(p*l+l*t+p*t)<<"\n\n";
	cout << "bangun tabung\n";
	cout << "jari2 = ";
	cin >> r;
	cout << "tinggi = ";
	cin >> t;
	cout << "volume tabung = "<< 3.14*r*r*t<< "\n";
	cout<< "luas permukaan tabung = "<< 2*3.14*r*(r+t) << "\n\n";
	cout << "bangun kerucut\n";
	cout << "jari-jari= ";
	cin >> r;
	cout << "tinggi= ";
	cin >> t;
	cout << "sisi miring= ";
	cin >> s;
	cout << "volume kerucut = "<< 3.14*r*r*t/3<<"\n";
	cout << "luas permukaan kerucut = "<< 3.14*r*(r+s)<<"\n\n";
	cout<< "bangun limas segi-x SAMA SISI\n";
	cout<< "ingin menghitung limas segi: ";
	cin >> s;
	if (s==3) {
		cout<< "alas= ";
		cin >> a;
		cout<< "tinggi alas= ";
		cin>> t_a;
		cout<< "tinggi limas= ";
		cin>> t;
		cout<< "volume limas segitiga SAMA SISI = "<<a*t*t_a*1.67<<"\n";
		cout<< "luas permukaan limas = "<< 2*a*t_a;
	} 
	else if (s==4) {
		cout << "rusuk alas = ";
		cin >> r;
		cout << "tinggi limas = ";
		cin >> t;
		cout << "volume limas segiempat SAMA SISI = "<< r*r*t*0.33 <<"\n";
		cout<< "luas permukaan limas = "<< r*r+2*r*sqrt(r*r*0.25+t*t)<<"\n\n";
	}
	else {
		cout << "jarak dari sudut ke pusat = ";
		cin >> r;
		cout << "tinggi limas = ";
		cin >> t;
		cout<< "volume limas segi "<<s<<" SAMA SISI = "<<0.5*s*r*r*sin(6.282/s)*t*0.33<<"\n";
		cout<<"panjang rusuk alas = ";
		cin >> a;
		cout<< "jarak dari rusuk alas ke pusat = ";
		cin>>p;
		cout<<"luas permukaan limas segi "<<s<<" SAMA SISI = "<<s*r*r*sin(6.282/s)+s*0.5*sqrt(p*p+t*t)*a<<"\n";
		
	}
	cout<< "bangun prisma segi-x SAMA SISI\n";
	cout<<"ingin menghitung prisma segi: ";
	cin >> s;
	if (s==3){
		cout<<"rusuk alas = ";
		cin>>r;
		cout<<"tinggi alas = ";
		cin>> t_a;
		cout<< "tinggi prisma";
		cin>>t;
		cout<< "volume prisma segitiga SAMA SISI = "<<r*t_a*0.5*t<<"\n";
		cout<<"luas permukaan prisma = "<<r*t_a+3*t*sqrt(s*s*0.25+t_a*t_a)<<"\n";
	} else if (s==4){
		cout <<"bangun balok \n";
		cout<< "panjang= ";
		cin >> p;
		cout << "lebar= ";
		cin >> l;
		cout << "tinggi= ";
		cin >> t;
		cout << "volume balok = "<< p*l*t << "\n";
		cout << "luas permukaan balok = "<<2*(p*l+l*t+p*t)<<"\n\n";
	} else {
		cout<< "jarak dari sudut ke pusat = ";
		cin >> r;
		cout<<"panjang sisi = ";
		cin>>a;
		cout<< "tinggi = ";
		cin>> t;
		cout << "volume prisma segi "<<s<<" sama sisi = "<<0.5*s*r*r*sin(6.282/s)*t<<"\n";
		cout<< "luas permukaan prisma = "<<s*r*r*sin(6.282/s)+a*t*s<<"\n\n";
	}
	cout<< "bangun bola\n";
	cout<<"jari-jari = ";
	cin>>r;
	cout<<"volume bola = "<<1.33*3.14*r*r*r;
	cout<<"luas permukaan bola = "<<4*3.14*r*r<<"\n\n";
	cout<<"TERIMA KASIHH :) ";
	
	return 0;
}
