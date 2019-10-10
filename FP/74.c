#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f,g,h,i;
	char x;
	scanf ("%d",&a);
	for(b=1;b<=a;b++)
	{
		scanf("%d %d",&h,&c);
		x=h;
		d=c-1;
		i=2*c-1;
		if(x==4)
		{
			for(g=1;g<=c;g++)
			{	
				for(e=1;e<=d;e++)
				{
					printf(" ");
				}
				d--;
				for(e=1;e<=2*g-1;e++)
				{
					if(e==1||e==2*g-1)
					{
						printf("%c",x);
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			}
			d=1;
			for(g=1;g<=c-1;g++)
			{
				for(e=1;e<=d;e++)
				{
					printf(" ");
				}
				d++;
				for(e=1;e<=2*(c-g)-1;e++)
				{
					if(e==1||e==2*(c-g)-1)
					{
						printf("%c",x);
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			}
		}
		else if(x==3)
		{
			for(g=1;g<=c;g++)
			{	
				for(e=1;e<=d;e++)
				{
					printf(" ");
				}
				d--;
				for(e=1;e<=2*g-1;e++)
				{
					if(e==1||e==2*g-1)
					{
						printf("%c",x);
					}
					else
					{
						printf(" ");
					}
				}
				for(e=1;e<=i;e++)
				{
					printf(" ");
				}
				i-=2;
				for(e=1;e<=2*g-1;e++)
				{
					if(e==1||e==2*g-1)
					{
						printf("%c",x);
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			}
			for(g=1;g<=4*c-1;g++)
			{
				if(g==1||g==2*c||g==4*c-1)
				{
					printf("%c",x);
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
			d=1;
			for(g=1;g<=2*c-1;g++)
			{
				for(e=1;e<=d;e++)
				{
					printf(" ");
				}
				d++;
				for(e=1;e<=2*(2*c-g)-1;e++)
				{
					if(e==1||e==2*(2*c-g)-1)
					{
						printf("%c",x);
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			}
		}
	}
}
