#include <iostream>
using namespace std;

//prototype
void prosesbaca();
int prosestambah();
int proseskurang();
void prosestampil();

//variable global 
int a,b;

//program utama
int main (){
	prosesbaca();
	prosestampil();
	return 0;
}

//prosesbaca
void prosesbaca(){
	cout <<" masukan nilai a : ";
	cin >> a;
	cout <<" masukan nilai b : ";
	cin >> b;
}

//prosestambah
int prosestambah(){
	return a + b ;
}

//proseskurang
int proseskurang(){
	int hasil;
	hasil = a - b;
}

//prosestampil
void prosestampil (){
	cout <<" Hasil tambah : " << prosestambah() << endl;
	cout <<" Hasil Kurang : " << proseskurang();
}