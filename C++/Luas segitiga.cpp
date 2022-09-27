#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int A,T;
	float L,K;
	cout<<"Nama		: Riki Ade Saputra"<<endl;
	cout<<"Kelas		: 02TPLE003"<<endl;
	cout<<"Nim		: 211011400192"<<endl;
	cout<<"====================================="<<endl;
	cout<<"Masukan nilai Alasnya : ";
	cin>>A;
	cout<<"Masukan nilai Tingginya : ";
	cin>>T;
	
	K=sqrt(A^2 * T^2) + A + T;
	L=0.5*A*T;
	
	cout<<"Hasil Keliling : "<<K<<endl;
	cout<<"Hasil Luas : "<<L<<endl;
	return 0;
}
