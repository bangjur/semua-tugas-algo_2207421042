
//AZZURI PUTRA MAHENDRA TMJ 1B 2207421042
#include <iostream>
using namespace std;

int main(){
	float nilai;
	cout<<"masukkan nilai\t: ";
	cin >> nilai;
	if (nilai >= 81){
		cout<<"huruf mutu\t: A \nsebutan mutu\t: sangat istimewa \nangka mutu\t: 4";
	} else if (nilai >= 76){
		cout<<"huruf mutu\t: A- \nsebutan mutu\t: istimewa \nangka mutu\t: 3,7";
	} else if (nilai >= 72){
		cout<<"huruf mutu\t: B+ \nsebutan mutu\t: lebih dari baik \nangka mutu\t: 3,3";
	} else if (nilai >= 68){
		cout<<"huruf mutu\t: B \nsebutan mutu\t: baik \nangka mutu\t: 3";
	} else if (nilai >= 64){
		cout<<"huruf mutu\t: B- \nsebutan mutu\t: cukup baik \nangka mutu\t: 2,7";
	} else if (nilai >= 60){
		cout<<"huruf mutu\t: C+ \nsebutan mutu\t: lebih dari cukup \nangka mutu\t: 2,3";
	} else if (nilai >= 56){
		cout<<"huruf mutu\t: C \nsebutan mutu\t: cukup \nangka mutu\t: 2";
	} else if (nilai >= 41){
		cout<<"huruf mutu\t: D \nsebutan mutu\t: kurang \nangka mutu\t: 1";
	} else if (nilai < 41){
		cout<<"huruf mutu\t: E \nsebutan mutu\t: gagal \nangka mutu\t: 0";
	}
	return 0;
}
