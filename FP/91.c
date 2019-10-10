#include<stdio.h>
int main()
{
	double a,b,c,d;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a>=b && a>=c)
	{
		d=b+c;
		if(d>a)
		{
			if((a==b && b!=c) || (a==c && c!=b) || (c==b && b!=a))
			{
				printf("sama kaki\n");
			}
			else if(a==b && b==c)
			{
				printf("sama sisi\n");
			}
			else
			{
				printf("sembarang\n");
			}
		}
		else
		{
			printf("Tidak bisa\n");
		}
	}
	else if(b>=a && b>=c)
	{
		d=a+c;
		if(d>b)
		{
			if((a==b && b!=c) || (a==c && c!=b) || (c==b && b!=a))
			{
				printf("sama kaki\n");
			}
			else if(a==b && b==c)
			{
				printf("sama sisi\n");
			}
			else
			{
				printf("sembarang\n");
			}
		}
		else
		{
			printf("Tidak bisa\n");
		}
	}
	else if(c>=b && c>=a)
	{
		d=a+b;
		if(d>c)
		{
			if((a==b && b!=c) || (a==c && c!=b) || (c==b && b!=a))
			{
				printf("sama kaki\n");
			}
			else if(a==b && b==c)
			{
				printf("sama sisi\n");
			}
			else
			{
				printf("sembarang\n");
			}
		}
		else
		{
			printf("Tidak bisa\n");
		}
	}
	return(0);
}
