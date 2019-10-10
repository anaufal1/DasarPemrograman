#include <stdio.h>
int main(void)
{
	int x,y,x1,y1;
	scanf("%d %d",&x1,&y1);
	x=x1%7;
	y=y1%7;
	if(x>=y && x1>=1 && x1<=31 && y1>=1 && y1<=31)
	{
		y=x-y;
		switch(y)
		{
			case 0 :
				printf("Minggu\n");
				break;
			case 6 :
				printf("Senin\n");
				break;
			case 5 :
				printf("Selasa\n");
				break;
			case 4 :
				printf("Rabu\n");
				break;
			case 3 :
				printf("Kamis\n");
				break;
			case 2 :
				printf("Jumat\n");
				break;
			case 1 :
				printf("Sabtu\n");
				break;
		}
	}
	else if(x<y && x1>=1 && x1<=31 && y1>=1 && y1<=31)
	{
		y=y-x;
		switch(y)
		{
			case 0 :
				printf("Minggu\n");
				break;
			case 1 :
				printf("Senin\n");
				break;
			case 2 :
				printf("Selasa\n");
				break;
			case 3 :
				printf("Rabu\n");
				break;
			case 4 :
				printf("Kamis\n");
				break;
			case 5 :
				printf("Jumat\n");
				break;
			case 6 :
				printf("Sabtu\n");
				break;
		}
	}
	return(0);
}
