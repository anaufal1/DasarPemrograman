#include<stdio.h>

int main(){
    int a, c, e, b=1, d;
    scanf("%d", &a);

    while(b<=a){
        e=0;
        scanf("%d",&d);
        for(c=1;c<=d/2;c++){
        if(d%c==0){
            e+=c;
        }
    }
        printf("%d\n", e);
        b++;
    }
    return 0;
}
