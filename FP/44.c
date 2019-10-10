#include<stdio.h>
#include<string.h>
int main(){
	char 	waktu[1000] = "11-12-2017",
			lol[1000] = "lo-ol";
	char *tanggal, *bulan, *tahun;
	tanggal = strtok(waktu, "-");
	bulan = strtok(lol, "-");
	tahun = strtok(NULL, "-");
	printf("%s\n%s\n%s\n%s\n", waktu, tanggal, bulan, tahun);
}
