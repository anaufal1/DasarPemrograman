#include<stdio.h>
int main(){
	int a[1000];
	int i,n;
	int d=0;
	printf("Masukkan BANYAKNYA angka yang akan dijumlahkan : ");
	scanf("%d",&n);
	printf("Masukkan angkanya : \n");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++){
		d=d+a[i];
	}
	printf("Hasilnya adalah :%d",d);
	return 0;
}
