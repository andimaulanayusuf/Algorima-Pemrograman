#include <iostream>
using namespace std;

int main () {
	// variable
	int a,b,temp;
	
	//proses membaca
	cout << "Masukan Nilai A : " ;
	cin >> a;
	cout << "Masukan Nilai B : " ;
	cin >> b;
	
	//proses tukar
	temp = b ;
	b = a ;
	a = temp ;
	
	//proses tampil
	cout <<"=================================="<< endl;
	cout <<"Nilai a Sekarang : " << a << endl;
	cout <<"Nilai b Sekarang : " << b << endl;
	
	return 0;
}