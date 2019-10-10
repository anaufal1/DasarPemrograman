#include<stdio.h>

int main(){
	int T, a, x, z;
	long long totalz, hasil;	
	printf("Masukkan Test Case\nMasukkan bilangan dan kode basis tujuan : ");
	scanf("%d\n", &T);

	do{
	
		scanf("%d %d", &a, &x);
		totalz=1;
		hasil=0;
		while(a>0){
			z=a%x;
			a=a/x;
			totalz=totalz*10+z;
		}
		while(totalz>0){
			z=totalz%10;
			totalz=totalz/10;
			hasil=hasil*10+z; 
		}
		hasil=hasil/10;
		printf("%lld\n", hasil);
		T--;
	}while(T>0);
	return 0;

		
		
}

		
	
	


