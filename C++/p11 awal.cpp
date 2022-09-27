#include <iostream>
using namespace std;
struct data
{
char nama[50], alamat[100], telepon[20], kelamin[15];
};
data siswa[100];

int main ()
{
	printf(" Nama : Muhammad Reza Fadilah \nKelas : 02TPLE003 \nNIM: 211011402020");
 printf("\n ======================== ");
 int n,i,telepon;
 char pilih, nama, alamat, kelamin;
 datasiswa:
 cout<<"\nMasukkan Data Siswa\n"; cout<<"Nama : ";
cin>>siswa[i].nama;
 cout<<"Alamat : "; cin>>siswa[i].alamat;
 cout<<"\nTelepon : "; cin>>siswa[i].telepon;
 cout<<"\nJenis Kelamin[Male/Female] : "; cin>>siswa[i].kelamin;
 cout<<" =======================\nHasil\n"; 
 cout<<"Nama : "<<nama<<endl; 
 cout<<"Alamat : \n"<<alamat<<endl; 
 cout<<"Telepon : \n"<<telepon<<endl;
 cout<<"Jenis Kelamin : \n"<<kelamin<<endl; 
 cout<<" Mau Tambah Data Lagi[Y/T] : ";
 cin>>pilih;
 switch(pilih)
 {
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
