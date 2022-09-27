#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
	int  total, diskon, A, B, C;
	int tiket;
	cout<<"Tiket Ekonomi(1) : Rp. 200.000,-"<<endl;
	cout<<"Tiket VIP(2) : Rp. 400.000,-"<<endl;
	cout<<"Tiket VVIP(3) : Rp. 500.000,-"<<endl;
	
	
	cout<<"Pendaftaran ke-: ";
	cin>>diskon;
	cout<<"Masukan Tiket : ";
	cin>>tiket;
	cout<<endl;
	A = 200000;
	B = 400000;
	C = 500000;
	
	if(tiket == 1){
		tiket = A;
		cout<<"Tiket Ekonomi : Rp. "<<A<<endl;
	}
	
	else if(tiket == 2){
		tiket = B;
		cout<<"Tiket VIP : Rp. "<<B<<endl;
	} 
	else{
		tiket = C;
		cout<<"Tiket VVIP : Rp. "<<C<<endl;
	}

	if(diskon == 1) {
		cout<<"Diskon 30%"<<endl;
		diskon = tiket * 0.3;
	}
	else {
		cout<<"Diskon 10%"<<endl;
		diskon = tiket * 0.1;
	}

	cout<<"Potongan Harga : "<<diskon<<endl;
	total = tiket - diskon;
	
	cout<<"Total harga : "<<total<<endl;
	getch();
	return 0;
	
	
}
