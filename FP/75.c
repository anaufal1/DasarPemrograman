#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,i,f,b;
	double g;
	n=11;
	g=pow(2,(n-1)/2);
	for(i=1;i<=n;i++){
		if(i<=(n+1)/2){
			for(f=1;f<=pow(2,(i-1));f++){
				printf("*");
			}
		}
		else{
			for(f=1;f<=g/2;f++){
				printf("*");
			}
			g/=2;
		}
		printf("\n");
	}
	return 0;
}
