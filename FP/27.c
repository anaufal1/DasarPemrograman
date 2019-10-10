#include<stdio.h>

int buckets[107],max=0;

int maxMod(int n,int* i){
    if(n==0){
        if(buckets[0]>buckets[*i]) return 0;
        else return *i;
    }
    else{
        if(buckets[n]>buckets[*i]){
            *i=n;
        }
        maxMod(n-1,i);
    }
}

int main(){
    int a,b,i=0;
	char c;
	printf("Program Mencari modus\n"
            "Silahkan masukkan angka(max 100 angka) > \n");
	int mi=0;
	while(c!='\n'){
		scanf("%d%c",&b,&c);
		if(mi<b) mi=b;
		buckets[b]++;
	}
	maxMod(mi,&mi);
	printf("%d",mi);


}
