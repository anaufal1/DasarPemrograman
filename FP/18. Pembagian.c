#include <stdio.h>
int main(){
	int n;
	printf("Masukkan jumlah bilangan yang akan dibagi :");
	scanf("%d", &n);
	int a[n],b,c;
	for(b=0;b<n;b++)
		scanf("%d", &a[b]);
	int d=a[0];
	for(c=0;c<n-1;c++)
	{
		d=d/a[c+1];
	}
	printf("%d", d);
}
