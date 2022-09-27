#include <stdio.h>
#include <ctype.h>
int main(void){
	char c = 'C';
	if(isupper(c)){
		printf("%c is uppercase character\n",c);
	} else{
		printf("%c is not uppercase character\n",c);
	}
	return 0;
}
