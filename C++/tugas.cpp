#include <iostream>
#include <conio.h>
using namespace std;
int main (){
    int pinjam, jmlangsur, bayar, sisapinjam;
    cout<<"jmlpinjam :" ;cin>>pinjam;
    cout<<"jmlangsur :" ;cin>>jmlangsur;
    for(int i=1; i<=jmlangsur; i++){
        cout<<"angsuran ke-"<<i<<" :"; cin>>bayar;
        if(bayar>=pinjam)
        break;
        else{
    pinjam=pinjam-bayar;
    if(i!=jmlangsur)
    cout<<"sisa pinjam:" <<pinjam<<endl;
    }
    if(i==jmlangsur && pinjam>0)
    {
    pinjam=pinjam+bayar;
    cout<<"sisa pinjam:" <<pinjam<<"lunas angsuran ke-"<<jmlangsur<<endl;
    while(pinjam>0)
    {cout<<"angsuran ke- :"<<jmlangsur<<":";cin>>bayar;
    sisapinjam=pinjam-bayar;
    if (sisapinjam>0)
    {
    cout<<"sisa pinjam :"<<pinjam<<endl;
    cout<<"harus lunas pada angsuran ke-"<<jmlangsur<<endl;}
    else
    break;}}}

    if(bayar>pinjam)
    cout<<"pinjaman lunas, kembali Rp."<<(bayar-pinjam)<<endl;
    else
    cout<<"pinjaman lunas"<<endl;
    getch();
}