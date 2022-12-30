//AZZURI PUTRA MAHENDRA TMJ 1B 2207421042

#include <iostream>
#include <cmath>
using namespace std;

int main (){
	float BMI, beratbadan, tinggibadan;
	string jeniskelamin;
	cout << "KALKULATOR BMI\n\n";
	cout<<"untuk usia 2 - 120 tahun\n\n";
	cout << "berat badan\t: ";
	cin >> beratbadan;
	cout << "tinggi badan\t: ";
	cin >> tinggibadan;
	BMI = beratbadan/(pow(tinggibadan*0.01,2));
	cout << "indeks BMI anda\t: " << BMI << "\n";
	if (BMI > 30) {
		cout << "status\t\t: obesitas tingkat 2";
	} else if (BMI > 25) {
		cout << "status\t\t: obesitas tingkat 1";
	} else if (BMI > 23) {
		cout << "status\t\t: kelebihan berat badan";
	} else if (BMI > 18.5) {
		cout << "status\t\t: normal";
	} else {
		cout << "status\t\t: kurang berat badan";
	} 
	return 0;
}
