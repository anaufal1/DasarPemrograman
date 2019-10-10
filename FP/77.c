#include<stdio.h>
void ganti(long long int a){if(a==0) return; ganti(a/2); printf("%lld",a%2);} int main(void){long long int a; scanf("%lld",&a); if(a==0) printf("0"); ganti(a);}
