#include<stdio.h>

int main () {
	
//	type data var string,float,karakter,int
	int umur = 17;
	float tinggi = 173.5f;
	char nama = 'yafa';
	char kata[100] = "saya seeorang cyber security";
	
//	var input
	int tanggal;
	float hargaMbg;
	char charMbg;
	char deskripsi[100];	
	
	scanf("%d", &tanggal);
	getchar();
	printf("tanggal masuk mbg adalah %d\n", tanggal);
		
	scanf("%f", &hargaMbg);
	getchar();
	printf("harga mbg hari ini adalah %.3f\n", hargaMbg);
	
	scanf("%c", &charMbg);
	getchar();
	printf("char mbg hari ini adalah = %c\n", charMbg);
	
	scanf("%[^\n]", deskripsi);
	getchar();
	printf("deskripsi menu mbg hari ini %s", deskripsi);
	
//	printf("umur saya = %d\n", umur);
//	printf("tinggi saya = %.1f\n", tinggi);
//	printf("nama saya = %c\n", nama);
//	printf("pengenalan saya = %s\n", kata);
	
	return 0;
}
