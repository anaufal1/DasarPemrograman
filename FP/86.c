#include<stdio.h>
int main(void)
{
	int a,b,f,g;
	long long c,d,e,max,hasil;
	scanf("%d",&f);
	for(g=1;g<=f;g++){
		max=0;
		scanf("%d",&a);
			for(b=1;b<=a;b++){
				scanf("%d %d",&c,&d);
				e=d-c+1;
				hasil=(c+d)*e/2;
				if(hasil>max){
					max=hasil;
				}
			}
		printf("%lld\n",max);
	}
}
