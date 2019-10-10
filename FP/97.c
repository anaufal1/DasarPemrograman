#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,b,c,d=2,f;
	scanf("%d",&c);
	a=1;
	while(a<=c)
	{
		f=1;
		for(b=2;b<=sqrt(d);b++)
		{
			if((d%b)==0)
			{
				f=0;
				break;
			}
		}
		if (f==1)
		{
			printf("%d ", d);
			a++;
		}
		d++;
	}
	return 0;
}
