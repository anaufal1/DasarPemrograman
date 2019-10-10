#include<stdio.h>

int main()
{
    int t,l,c,i,j,k;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&l,&c);
        getchar();
        for(i=1;i<=l;i++)
        {
            for(k=1;k<=(c*3+1);k++)
            {
                printf("*");
            }
            printf("\n");
            k=2;
            while(k--){
            for(j=1;j<=c;j++)
            {
            printf("*..");
            }
            printf("*\n");
            }
        }
        for(k=1;k<=(c*3+1);k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
