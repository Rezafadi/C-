#include <iostream>
using namespace std;
int main(){
	char pilih;
	char telepon[20];
	char nama[100], alamat[100], kelamin[20];
	datasiswa:
	cout<<"Masukan Nama : "; cin.getline(nama,100); cout<<endl;
	cout<<"Masukan Alamat : "; cin.getline(alamat,100); cout<<endl;
	cout<<"Masukan Jenis Kelamin : "; cin.getline(kelamin,20); cout<<endl;
	cout<<"Masukan Telepon : "; cin.getline(telepon,20); cout<<endl;
	cout<<" =======================\n";
	cout<<"Nama Siswa : "<<nama<<endl;
	cout<<"Alamat : "<<alamat<<endl;
	cout<<"Jenis Kelamin : "<<kelamin<<endl;
	cout<<"Telepon : "<<telepon<<endl;
	cout<<" Mau Tambah Data Lagi[Y/T] : ";
 	cin>>pilih;
	switch(pilih){
	case 'Y':
	case 'y':
	goto datasiswa;
	break;
	case 'T':
 	case 't':
 	break;
 	default:
 	cout<<"Data Tidak Ada";
 	}
}
