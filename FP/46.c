#include<stdio.h>
int temukan(int a); /*function prototypes*/
int main(){
	int n;/*input-number*/
	scanf("%d",&n);
	printf("%d",temukan(n))/*call the function and display the value*/;
}

int temukan(int a){
	if(a<=0){return;}/*the value of a is 0*/
	else{return temukan(a-1)+2;}/*increase the value by 2 and call the function until a=0*/
}
