#include<stdio.h>
#include<math.h>
int prime(int b){
    //untuk c kurang dari akar b
    int c;
        for(c=2;c*c<=b;c++){
            //jika b / c tidak bersisa
            if(b%c==0){
                return 0;
                //loop berhenti
                break;
            }
        }
        return 1;
}

int main()
{
    int a,b,e,f;

    b=2;
    f=0;
    scanf("%d %d",&a,&e);
    while(b<=e){
        if(prime(b)&&b>e){
            printf("%d\n", b);
        }
        b++;
        }
    return 0;
}
