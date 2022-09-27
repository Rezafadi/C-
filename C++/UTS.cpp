#include <iostream>
#include <stdio.h>
using namespace std;
int H(char *s){
	int x = 0;
	for (;*s!='\0';s++)
	x++;
	return x;
}
int main(void){
	cout<<endl;
	
	
	char String [80];
	cout<<"inputlah sebuah kata : ";
	cin.getline(String, 100); cout<<endl;
	cout<<"jumlah Karakternya adalah :"<<H(String)<<" Huruf "<<endl;
	return 0;
}
