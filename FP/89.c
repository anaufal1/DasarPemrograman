#include<stdio.h>
int function (int a);
int main(void)
{
	int T,b,K,d,e,f,space;
	scanf("%d",&T);
	for(b=1;b<=T;b++)
	{
		scanf("%d",&K);
		function (K);
		if(b!=T)
		{
			printf("\n");
		}
	}
	return 0;
}

int
function (int a)
{
	int T,b,K,d,e,f,space;
		space=a-1;
		for(d=1;d<=a;d++)
		{
			for(e=1;e<=space;e++)
			{
				printf(" ");
			}
			space--;
			for(e=1;e<=d;e++)
			{
				printf("*");
			}
			printf("\n");
		}
		space=a;
		for(d=1;d<=a;d++)
		{
			for(e=1;e<=a;e++)
			{
				printf(" ");
			}
			for(e=1;e<=space;e++)
			{
				printf("*");
			}
			space--;
			printf("\n");
		}
		
}
