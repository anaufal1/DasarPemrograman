#include<stdio.h>
int gcd(int a, int b){
	if(a!=0) return gcd(b%a,a);
	else return b;
}
int main(void){
	int a,b,c;
	printf("Masukkan Data nya (Pastikan angka ke-2 > angka ke-1):\n");
	scanf("%d%d",&a,&b);
	printf("FPB dari dua bilangan tersebut adalah %d\n",gcd(a,b));
}
