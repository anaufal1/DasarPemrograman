#include <stdio.h>
#include <math.h>
#define SUDUT 6
int main(void)
{
	int jam,menit;
	double j,sudut;
	char tanda;
	scanf("%2d%c%2d",&jam,&tanda,&menit);
		if(jam<=12 && jam>=0 && menit>=0 && menit<=59)
		{
			j=(double)jam*5;
			j=j+((double)menit/12);
			sudut=(j-(double)menit)*SUDUT;
			sudut=sqrt(sudut*sudut);
				if(sudut<=180)
				{
					printf("%02d %02d\n",jam,menit);
					printf("%.3lf\n",sudut);
				}
				else
				{
					sudut=360-sudut;
					printf("%02d %02d\n",jam,menit);
					printf("%.3lf\n",sudut);
				}
			
		}
		else if(jam>12 && jam<=23 && menit>=0 && menit<=59)
		{
			jam=jam-12;
			j=(double)jam*5;
			j=j+((double)menit/12);
			sudut=(j-(double)menit)*SUDUT;
			sudut=sqrt(sudut*sudut);
				if(sudut<=180)
				{
					printf("%02d %02d\n",jam,menit);
					printf("%.3lf\n",sudut);
				}
				else
				{
					sudut=360-sudut;
					printf("%02d %02d\n",jam,menit);
					printf("%.3lf\n",sudut);
				}
			
		}
	return(0);
}
