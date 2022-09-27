#include <stdio.h>

int main()
{
	int kdhari;
	printf("Masukan kode hari[1-7]:"); scanf("%d", &kdhari);
	
	if (kdhari=1)
	{
		printf("Senin");
	}
	else if (kdhari=2)
	{
		printf("Selasa");
	}
	else if (kdhari=3)
	{
		printf("Rabu");
	}
	else if (kdhari=4)
	{
		printf("Kamis");
	}
	else if (kdhari=5)
	{
		printf("Jum'at");
	}
	else if (kdhari=6)
	{
		printf("Sabtu");
	}
	else if (kdhari=7)
	{
		printf("Minggu");
	}
	else{
		printf("Kode Tidak ada");
	}
	return 0;
}
	
