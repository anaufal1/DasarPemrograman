#include<stdio.h>

int main()
{
    int n, k, nn, counter=0;
    scanf("%d %d",&n,&k);

    while(n--)
    {
        scanf("%d",&nn);
        if(nn%k==0)
        {
            counter++;
        }
    }
    printf("%d\n", counter);

    return 0;
}
