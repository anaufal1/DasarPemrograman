#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
	char nama[200];
	long long nomor;
}kartu;
int main(){
	int n;
	printf("Masukkan Jumlah kartu: ");
	scanf("%d",&n);
	char dummy;
	scanf("%c",&dummy);
	kartu penduduk[n+1];
	printf("Masukkan nama dan NRP : \n");
	int i,j;
	for (i=0;i<n;i++){
		gets(penduduk[i].nama);
		scanf("%lld",&penduduk[i].nomor);
		scanf("%c",&dummy);
	}
	for (i=0;i<n;i++){
		for (j=0;j<n-1-i;j++){
			if (penduduk[j].nomor>penduduk[j+1].nomor){
				kartu swap;
				swap=penduduk[j];
				penduduk[j]=penduduk[j+1];
				penduduk[j+1]=swap;
			}
		}
	}
	printf("\nSetelah diurutkan akan menjadi : \n");
	for (i=0;i<n;i++){
		printf("%s %014lld\n",penduduk[i].nama,penduduk[i].nomor);
	}
	return 0;
}
