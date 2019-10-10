#include<stdio.h>

int main()
{
    int t,l,c,i,j;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&l,&c);
        getchar();
        for(i=1;i<=l;i++)
        {
            for(j=1;j<=c;j++)
            {
            if(i==1||i==l||j==1||j==c)
            {
                printf("*");
            }
            else
            {
                printf(".");
            }
            }
            printf("\n");
        }
    }
    return 0;
}
