#include<stdio.h>

int maxNum(int a[],int o){
    if(o==0) return a[0];
    else {
        if(a[o]>maxNum(a,o-1)){
            return a[o];
        }
        else{
            return maxNum(a,o-1);
        }
    }
}

int main(){
	int b[100],i=0;
	char c;
	printf("Program Mencari Nilai max\n"
            "Silahkan masukkan angka(max 100 angka) > \n");
	while(c!='\n'){
		scanf("%d%c",&b[i],&c);
		i++;
	}
	printf("%d\n",maxNum(b,i));
}
