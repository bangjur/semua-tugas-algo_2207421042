#include <iostream>
using namespace std;

int main(){
	//ini program biodata saya
	string nama, tempattanggallahir, nim, alamat, kelamin, bulanpenulisan = "oktober", jurusan, prodi;
	int tanggalpenulisan = 20, tahunpenulisan = 2022;
	double tinggi;
	cout << "BIODATA DIRI\n\n";
	cout << "nama\t\t: " ;
	getline(cin,nama);
	cout << "lahir\t\t: ";
	getline(cin,tempattanggallahir);
	cout << "nim\t\t: ";
	getline(cin,nim);
	cout << "alamat\t\t: ";
	getline(cin,alamat);
	cout << "kelamin\t\t: ";
	getline(cin,kelamin);
	cout << "tinggi badan\t: ";
	getline(cin,tinggi);
	cout << "jurusan\t\t: ";
	getline(cin,jurusan);
	cout << "prodi\t\t: ";
	getline(cin, prodi);
	cout << "\n\n\n";
	cout << "\t \t \tDepok, "<<tanggalpenulisan<<" "<<bulanpenulisan<<" "<<tahunpenulisan<<"\n";

	return 0;
	
}
