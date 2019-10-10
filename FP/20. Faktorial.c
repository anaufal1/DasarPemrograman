#include <stdio.h>
int main(){
	int n;
	printf("Masukkan bilangan yang akan difaktorial :");
	scanf("%d", &n);
	int b,c;
	for(c=(n-1);c>0;c--)
	{
		n=n*c;
	}
	printf("Hasilnya adalah : %d", n);
}
