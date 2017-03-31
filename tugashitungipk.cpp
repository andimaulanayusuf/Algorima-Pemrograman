#include <iostream>
using namespace std;
//dekfungsi
bool iswithinRange(float nilai, int max, int min);
void proseshitung();
void prosescetak();

//dekvariable
float nilaiIP, totalIP;
bool valid;
int jml_mhs, jml_lulus, jml_tdklulus;

int main() {
proseshitung();
prosescetak();
}

bool iswithinRange(float nilai, int max, int min) {
	if (nilai >= max || nilai <= 0 ){
	return false;
}
	return true;
}

void proseshitung() {
	do {
	cout << "Masukan Nilai IP : ";
		cin >> nilaiIP;
		valid = iswithinRange(nilaiIP,4,0);
		if (valid){
			if (nilaiIP >= 2.75){
				jml_lulus++;
			} else {
				jml_tdklulus++;
			}
			totalIP = totalIP + nilaiIP;
			jml_mhs++;
		} else {
			cout << "Tidak Ada Data" << endl;		
		}
	} while (nilaiIP!= -999 );
}

void prosescetak(){
	cout <<" Banyak Mahasiswa : " << jml_mhs << endl;
	cout <<" Banyak Mahasiswa lulus : " << jml_lulus << endl;
	cout <<" Banyak Mahasiswa Tidak Lulus : " << jml_tdklulus << endl;
	cout <<" Rata Rata IP : " << (totalIP / jml_mhs) << endl;
}