#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <string.h>

main()
{
	long int kode, jumlah, sks, semester;
	char nama[100];
	printf("kode Masukkan: [1-2]:"); scanf("%c", &sks);
	
	if (kode == 1)
	{
		strcpy(nama, "Teknik Informatika");
		jumlah = 30000*sks;
		semester = jumlah*2;
	}
	else if (kode == 2)
	{
		strcpy(nama, "Akuntansi");
		jumlah = 20000*sks;
		semester = jumlah*2;
	}
	else if (kode == 1)
	{
		strcpy(nama, "Manajemen");
		jumlah = 15000*sks;
		semester = jumlah*2;
	}
	printf("*========================================*\n");
	printf("Nama Kursus : %s\n", nama);
	printf("Pembayaran dalam 1 semester: %ld\n", jumlah);
	printf("Pembayaran dalam 1 tahun: %ld\n", semester);
	getch();
}
