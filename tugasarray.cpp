#include <iostream>
using namespace std;

int main()
{
	int angka[5];
	int i;

	for (int i = 0; i <= 4; i++)
	{
		cout<<" Angka ke = " << angka << " : ";
		cin >> angka[i];
	}
	for (int i = 0; i <= 4; i++)
	{
		cout <<" Angka Ke = " << angka << " : " << angka[i]; 
	}

	
}