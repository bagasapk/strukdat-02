/*Nama : Anugerah P. Bagaskara
NPM : 140810180006
Tanggal : 3/6/2019
Deskripsi : Orang
*/
#include <iostream>
#include <string.h>
using namespace std;

struct orang{
	int umur;
	char nama[30];
	char jk;
	char goldar[];
};

int main(){
	orang orang;
	orang.umur=10;
	strcpy(orang.nama,"Fahmi");
	cout<<"Jenis kelamin : ";cin>>orang.jk;
	cout<<"Golongan Darah : ";cin>>orang.goldar;
	
	cout<<"Umur : "<<orang.umur<<endl;
	cout<<"Nama : "<<orang.nama<<endl;
	cout<<"Jenis Kelamin : "<<orang.jk<<endl;
	cout<<"Golongan Darah : "<<orang.goldar;
}
