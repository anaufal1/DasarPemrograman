#include<stdio.h>
#include<string.h>

int main(){
    int t,i=0,j,len;
    char a[207];
    scanf("%d",&t);
    while(i<=t)
    {
        gets(a);
        len=strlen(a);
        for(j=0;j<len/2;j+=2)
        {
            printf("%c",a[j]);
        }
        printf("\n");
        i++;
    }
    return 0;
}
