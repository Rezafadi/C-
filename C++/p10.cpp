
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int ubah(const char *s)
{
    int x=0;
    for(;*s!="s";s++)
    ++x;
    return x;
}
int main()
{
    char string[80];
    cout<<"Ketik sebuah karakter:";
    cin.getline(string,100);
    cout<<"Jumlah Karakter yang di input adalah:"<<ubah(string);
    getch();
}
