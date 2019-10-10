#include<stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	printf("%d",a);
	for(c=1;c<=b;c++)
	{
		printf("0");
	}
	printf("\n");
	return 0;
}
