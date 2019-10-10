//HANYA GANJIL
#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f;
	scanf("%d",&a);

	//BAGIAN ATAS
	c=a-2;
	for(b=1;b<=a/2;b++)		
	{	
		//TITIK				
		for(d=1;d<=c;d++)	
		{				
			printf(".");
		}
		c-=2;
		//BINTANG
		for(d=1;d<=2*b;d++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	//BAGIAN TENGAH
	for(b=1;b<=a;b++)
	{
		printf("*");
	}
	printf("\n");
	
	//BAGIAN BAWAH
	c=2;
	e=a-2;
	for(b=1;b<=a/2;b++)
	{
		//TITIK
		for(d=1;d<=c;d++)
		{
			printf(".");
		}
		c+=2;
		//BINTANG
		for(d=1;d<=e;d++)
		{
			printf("*");
		}
		e-=2;
		printf("\n");
	}
	return 0;
}
