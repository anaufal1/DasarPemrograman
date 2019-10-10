#include<stdio.h>
int main()
{
    int nilai1=0;
	int nilai2=1;
	int nilai3,banyak;
    int batas;
    printf("Masukkan banyak bilangan fibonacci: ");
	scanf("%d",&banyak); 
    for(batas=0 ; batas<banyak ; batas++)
        { 
            if(batas==0)
            {
                nilai3=nilai1;
                printf("%d ",nilai3);
            }
            else if(batas==1)
            {
                nilai3=nilai2;
                printf("%d ",nilai3);
            }
            else if(batas>1)
            {
                nilai3=nilai1+nilai2; 
                nilai1=nilai2;
                nilai2=nilai3;
                printf("%d ",nilai3);
            }
        }
        printf("\n");

system("PAUSE");
return 0;
}
