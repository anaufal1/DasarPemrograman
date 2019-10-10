#include<stdio.h>
int main (){
int i,x,a,b,c;

scanf("%d",&i);

x = 1;

a = 1;

     while(x<=i){
	 	if(a==2){
              x ++;
              printf("%d   ",a);
         }
       else  if(a%2==1 && a!=1){
            b=0;
            for(c=1;c<=a;c++)
            {
                if(a%c==0)
                {
                    b++;
                }
            }
            if(b==2)
            {
                x++;
                printf("%d   ",a);
            }
      }

           a++;
      }

return 0;

}
