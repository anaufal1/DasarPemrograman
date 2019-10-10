#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		scanf("%d %d %d %d",&c,&d,&e,&f);
		for(k=1;k<=d*(f+1)+1;k++){
			printf("*");
		}
		printf("\n");
		for(g=1;g<=c;g++){
			for(i=1;i<=e+1;i++){
				if(i==e+1){
					for(j=1;j<=d*(f+1)+1;j++){
						printf("*");
					}
				}
				else{
					for(h=1;h<=d;h++){
						for(j=1;j<=f+1;j++){
							if(j!=1){
								printf(".");
							}
							else{
								printf("*");
							}
						}
					}
					printf("*");
				}
				printf("\n");
			}
		}
		if(b!=a){
			printf("\n");
		}
	}
	return 0;
}
