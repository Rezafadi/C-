#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include <fstream>

using namespace std;

int nilai[10];
int indeks;
char pilihan;


void confirm(){

tanya:
cout << "\n Tekan Y untuk melanjutkan: ";
cin >> pilihan;

if(pilihan == 'Y' || pilihan == 'y'){

}

else

{
cout << "Input salah" << endl;
goto tanya;
}

}

void masukan(){
	for (indeks = 0 ; indeks < 10 ; indeks++ ){
		cout << " masukkan data ke " << indeks + 1 << " = " ;
		cin >> nilai [indeks];
	}
}

void mkFile(){
	ofstream file;
	file.open ("tugas.txt");
	for (int i=0; i<=9;i++){
		file << nilai[i] << " ";
	}
	cout << "\n Data telah di simpan di tugas.txt" <<endl;
	file.close();
}
void readNilai(){
	ifstream fileku;
	char k;
	fileku.open("tugas.txt");
	for(int i=0;i<9;i++){
		fileku >> k;
	}
	cout <<"\n Data telah di baca"<<endl;
	fileku.close();
}

void readFile(){
	for (indeks = 0 ; indeks < 10 ; indeks++ ){
		cout << nilai [indeks] << " ";
	}
	cout << endl;
}

void urutMenaik(int array[],int n){
	int i, j, temp;
	cout<<" ";
	for(int i=n-1; i>=1; i--){
		for(int j=1; j<=i; j++){
			if(nilai[j]>nilai[j+1]){
				temp=nilai[j+1];
				nilai[j+1]=nilai[j];
				nilai[j]=temp;
			}
		}
	}
}

void tampilMenaik(){
	int i;
	int j=9;
	urutMenaik(nilai,j);
	for (i=0; i<=j; i++)
		cout<<nilai[i]<<" ";
		cout <<" \n data yang sudah di urutkan" << endl;
	cout << endl;
}

int main(void){
	char pilih;
	int n2;
	menu:
	cout << "Program Ini Dibuat Oleh : "<<endl;
	cout << "Nama		: Muhammad Reza Fadilah"<<endl;
	cout << "Nim		: 211011402020"<<endl;
	cout << "Kelas		: 02TPLE003"<<endl;
	cout << "\n================================"<<endl;
	cout << " MENU PILIHAN "<< endl;
	cout << "================================"<<endl;
	cout << "1. Memasukan sejumlah data dari keyboard "<<endl;
	cout << "2. Menyimpan Seluruh data kedalam sebuah arsip "<<endl;
	cout << "3. Membaca data dari arsip "<<endl;
	cout << "4. Menampilkan data "<<endl;
	cout << "5. Mengurutkan data secara menaik "<<endl;
	cout << "6.  Menampilkan data yang telah diurutkan secara menaik "<<endl;
	cout << "7. Keluar"<<endl;
	cout << "================================"<<endl;
	cout << "Masukkan Nomor Pilihan (1 - 7) : "; cin>>pilih;

switch ( pilih){
	case '1':
	masukan();
	confirm();
	system ("cls");
	goto menu;
	break;
	
	case '2':
	mkFile();
	confirm();
	system ("cls");
	goto menu;
	break;
	
	case '3':
	readNilai();
	confirm();
	system ("cls");
	goto menu;
	break;
	
	case '4':
	readFile();
	confirm();
	system ("cls");
	goto menu;
	break;
	
	case '5':
	urutMenaik(nilai, 1);
	cout <<"\n data telah di urutkan"<<endl;
	confirm();
	system ("cls");
	goto menu;
	break;
	
	case '6':
	tampilMenaik();
	confirm();
	system ("cls");
	goto menu;
	break;
	
	default:
	system ("cls");
	goto menu;
	cout << "input salah. \n";
	break;

	case '7':
	cout << "\n Anda Telah Keluar Dari Program " <<endl;
	cout << " TERIMA KASIH " <<endl;
	exit(1);
	break;
}
return 0;
}
