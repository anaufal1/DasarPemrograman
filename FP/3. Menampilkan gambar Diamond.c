#include<stdio.h>
int main(){
	int i, n, x, odd[50];
	const char spasi = 177;
	const char diamond = '*';
	
	printf("masukkan tinggi diamond = ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++) odd[i-1] = 2*i-1;
	
	for (i=0; i<n; i++){
		for (x=0; x<n-i; x++)	printf("%c", spasi);
		for (x=0; x<odd[i]; x++)	printf("%c", diamond);
		for (x=0; x<n-i; x++)	printf("%c", spasi);
		printf("\n");
	}
	for (i=n-2; i>=0; i--){
		for (x=0; x<n-i; x++)	printf("%c", spasi);
		for (x=0; x<odd[i]; x++)	printf("%c", diamond);
		for (x=0; x<n-i; x++)	printf("%c", spasi);
		printf("\n");
	}
	return 0;
}
