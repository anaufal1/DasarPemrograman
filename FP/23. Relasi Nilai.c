#include <stdio.h>

int main(){

	int a,b,x;
	
	scanf("%d %d %d",&a,&b,&x);
	
	if ((a>x) && (a%x==0)){
		printf("%d lebih besar %d dan %d kelipatan %d\n",a,x,a,x);
	}
	else if ((a>x) && (a%x!=0)){
		printf("%d lebih besar %d dan %d bukan kelipatan %d\n",a,x,a,x);
	}
	else if ((a<x) && (x%a==0)){
		printf("%d lebih kecil %d dan %d kelipatan %d\n",a,x,x,a);
	}
	else if ((a<x) && (x%a!=0)){
		printf("%d lebih kecil %d dan %d bukan kelipatan %d\n",a,x,x,a);
	}
	else if (a==x){
		printf("%d sama dengan %d\n",a,x);
	}
	if ((b>x) && (b%x==0)){
		printf("%d lebih besar %d dan %d kelipatan %d\n",b,x,b,x);
	}
	else if ((b>x) && (b%x!=0)){
		printf("%d lebih besar %d dan %d bukan kelipatan %d\n",b,x,b,x);
	}
	else if ((b<x) && (x%b==0)){
		printf("%d lebih kecil %d dan %d kelipatan %d\n",b,x,x,b);
	}
	else if ((b<x) && (x%b!=0)){
		printf("%d lebih kecil %d dan %d bukan kelipatan %d\n",b,x,x,b);
	}
	else if (b==x){
		printf("%d sama dengan %d\n",b,x);
	}
	
	return 0;

}
