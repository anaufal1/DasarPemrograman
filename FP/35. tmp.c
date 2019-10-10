#include<stdio.h>

int main(){
int N,data,i,hit,tmp;

scanf("%d",&N);
while(N--){
    tmp=0;
    scanf("%d",&data);
    for(i=1;i<data;i++){
        hit=data%i;
        if(hit==0){
            tmp+=i;
        }
    }
    printf("%d\n",tmp);
}

return 0;
}
