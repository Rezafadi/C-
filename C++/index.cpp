#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
main ()
{
 int a,*Pa;
 Pa=&a;
 *Pa=200;

 cout<<*Pa<<" ";
 (*Pa)++;
 cout<<*Pa<<" ";
 (*Pa)--;
 cout<<*Pa<<"\n";

 getche();
}
