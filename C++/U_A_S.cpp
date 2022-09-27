#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	cout<<"Nama		: MUHAMMAD REZA FADILAH"<<endl;
	cout<<"Nim		: 211011402020"<<endl;
	cout<<"Kelas		: 02TPLE003"<<endl;
	cout<<"================================="<<endl;
	
	int nilai['n'];
	int temp;
	int n;
	cout<<"Pilihan 1 : Memasukan sejumlah data dari keyboard"<<endl;
	cout<<"Banyak Data: ";
	cin>>n;
	cout<<endl;
	for (int a=1; a<=n; a++){
		cout<<"nilai["<<a<<"]: ";
		cin>>nilai[a];
	}
	cout<<"\n\n";
	cout<<"Pilihan 2 : Menyimpan Seluruh data kedalam sebuah arsip"<<endl;
	cout<<"\n\n";
	cout<<"Pilihan 3 : Membaca data dari arsip"<<endl;
	cout<<"\n\n";
	cout<<"Pilihan 4 : Menampilkan data"<<endl;
	for(int a=1; a<=n; a++){
		cout<<nilai[a]<<" ";
	}
	for(int a=n-1; a>=1; a--){
		for(int b=1; b<=a; b++){
			if(nilai[b]>nilai[b+1]){
				temp=nilai[b+1];
				nilai[b+1]=nilai[b];
				nilai[b]=temp;
			}
		}
	}
	cout<<"\n\n";
	cout<<"Pilihan 5 : Mengurutkan Data"<<endl;
	cout<<"\n\n";
	cout<<"Pilihan 6 : Menampilkan data yang telah diurutkan secara menaik"<<endl;
	for (int a=1; a<=n; a++){
		cout<<nilai[a]<<" ";
	}
	getch();
	return 0;
}
