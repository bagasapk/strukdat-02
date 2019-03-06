/*Nama : Anugerah P. Bagaskara
NPM : 140810180006
Tanggal : 3/6/2019
Deskripsi : Teater
*/
#include <iostream>
#include <string.h>
using namespace std;

struct theater{
	int room;
	char seat[3];
	char movieTitle[200];
};

main(){
	theater teater;
	cout<<"Room : ";cin>>teater.room;
	cout<<"Seat : ";cin>>teater.seat;
	cout<<"Judul : ";cin.ignore();cin.getline(teater.movieTitle,200);
	cout<<endl;
	
	cout<<"TIKET"<<endl;
	cout<<"Room : "<<teater.room<<endl;
	cout<<"Seat : "<<teater.seat<<endl;
	cout<<"Judul : "<<teater.movieTitle;	
}
