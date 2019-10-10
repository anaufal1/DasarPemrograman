#include<stdio.h>
#include<math.h>
double comb(int a, int b, int c){
	int i,atas=1,bawah=1;
	double hasil=1;
	for(i=b;i>=a;i--){
		hasil*=(double)i;
		if(c>1){
			hasil/=(double)c;
			c-=1;
		}
	}
	return hasil;
}
int main(void){
	int a,b,c,e;
	long long int i;
	double hasil;
	scanf("%d%d",&a,&b);
	c=a-b;
	if(c>=b) hasil=comb(c+1,a,b);
	else hasil=comb(b+1,a,c);
	i=(long long int)hasil;
	printf("%lld\n",i%1000000007);
	printf("%f\n",hasil);
}
