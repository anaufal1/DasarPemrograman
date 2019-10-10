#include<stdio.h>

int fpb(int d,int e){
    if(d==0)return e;
    else{return fpb(e%d,d);}
}

int main(){
    int a,b;
    printf("Program Mencari Faktor Persekutuan Terbesar\n"
            "Silahkan masukkan Angka Pertama> ");
    scanf("%d",&a);
    printf("Silahkan masukkan Angka Kedua> ");
    scanf("%d",&b);
	printf("FPB/GCD dari %d dan %d> %d\n",a,b,fpb(a,b));

}
