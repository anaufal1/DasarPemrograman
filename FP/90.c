#include<stdio.h>
int main(void)
{
	char a,b,c;
	scanf("%c",&a);
	scanf(" %c",&b);
	scanf(" %c",&c);
	a=a-96;
	b=b-96;
	c=c-96;
	printf("%d %d %d\n",a,b,c);
	return(0);
}
