
//AZZURI PUTRA MAHENDRA TMJ 1B 2207421042
#include <iostream>
using namespace std;

int main(){
	int angka;
	cout << "masukkan angka: ";
	cin >> angka;
	if (angka%15 == 0){
		cout << "fizzbuzz";
	} else if (angka%5 == 0){
		cout<<"buzz";
	} else if (angka%3 == 0){
		cout<< "fizz";
	}
	return 0;
}
