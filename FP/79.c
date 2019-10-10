#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f;
	double jumlah,rata;
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		scanf("%d",&c);
		double g[c];
		jumlah=0;
		rata=0;
		for(d=0;d<c;d++){
			scanf("%lf",&g[d]);
			jumlah+=g[d];
			rata=jumlah/c;	
		}
		f=0;
		for(e=0;e<c;e++){
			if(g[e]<rata){
				f+=1;
			}
		}
		printf("%d\n",f);
	}
	return 0;
}
