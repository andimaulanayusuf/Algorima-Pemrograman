#include <iostream>
using namespace std;

//prototype
void prosesbaca();
void prosestukar();
void prosestampil();

//variable global
int a,b, temp;

//program utama
int main () {
	prosesbaca();
	prosestukar();
	prosestampil();
	return 0;
}

//prosesbaca
void prosesbaca (){
	cout <<"Masukan Nilai A : ";
	cin >> a;
	cout <<"Masukan Nilai B : ";
	cin >> b;
}

//prosestukar
void prosestukar(){
	temp = b;
	b = a;
	a = temp;
}

//prosestampil
void prosestampil(){
cout <<"======================" << endl;
cout <<"Nilai a sekarang : " << a << endl;
cout <<"Nilai b Sekarang : " << b;
}