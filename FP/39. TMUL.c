#include<stdio.h>

int main()
{
    int n;
    long unsigned int L1,L2;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%lu %lu", &L1, &L2);
        printf("%lu\n", (L1*L2));
    }

    return 0;

}
