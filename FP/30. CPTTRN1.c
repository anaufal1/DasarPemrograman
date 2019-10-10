#include<stdio.h>

int main()
{
    int t,c,l,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&c,&l);
        for(i=0;i<c;i++)
        {
            for(j=0;j<l;j++)
            {
            if(j%2==0&&i%2==0||j%2==1&&i%2==1)printf("*");
            else{printf(".");}
            }
            printf("\n");
        }
    }
    return 0;

}
