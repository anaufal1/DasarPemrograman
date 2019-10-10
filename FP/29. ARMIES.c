#include<stdio.h>

int main()
{
    int d,b,m,bm,mm,jb,jm;
    scanf("%d", &d);
    while(d--)
    {
        jb=0;
        jm=0;
        scanf("%d", &b);
        while(b--)
        {
            scanf("%d",&bm);
            jb+=bm;
        }
        scanf("%d", &m);
        while(m--)
        {
            scanf("%d",&mm);
            jm+=mm;
        }
        if(jm>jb)printf("Megabajtolandia\n");
        else if(jb>jm)printf("Bajtocja\n");
        else{printf("Draw\n");}
    }
    return 0;
}
