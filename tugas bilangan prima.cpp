
//AZZURI PUTRA MAHENDRA TMJ 1B 2207421042
#include <iostream>
using namespace std;

int main (){
	int angka, pembagi, banyak_pembagi;
	banyak_pembagi = 0;
	cout << "masukkan angka: ";
	cin>> angka;
	for (pembagi = 1; pembagi <= angka; ++pembagi){
		int sisa = angka%pembagi;
		if (sisa == 0){
			++banyak_pembagi;
		} 
	} if (banyak_pembagi == 2){
		cout << angka <<" adalah bilangan prima";
	} else {
		cout<<angka<<" bukan bilangan prima";
	}
	return 0;
}
