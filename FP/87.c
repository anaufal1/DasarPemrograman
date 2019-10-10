#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f,g,i;
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		scanf("%d %d",&c,&d);
		i=0;
		for(e=1;;e++)
		{
			f=c/d;
			i=i+f;
			g=c%d;
			c=f+g;
			if(f==0)
			{
				break;
			}
		}
		printf("%d\n",i);
	}
	return 0;
}
