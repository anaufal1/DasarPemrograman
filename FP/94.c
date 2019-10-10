#include<stdio.h>
#include<string.h>
int palindrome(char arr[100][100], int n, int a){
	int i;
	if(n==a || n==1){
		return 1;
	}
	else if(strcmp(arr[a],arr[n-1])!=0){
		return 0;
	}
	else if(strcmp(arr[a],arr[n-1])==0){
		if(n==1){
			return 1;
		}
		return palindrome(arr, n-1, a+1);
	}
}
int main(void){
	char arr[100][100];
	int i,a,b;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%s",arr[i]);
	}
	b=palindrome(arr,a,0);
	if(b){
		printf("Kalimat ini adalah Palindrome\n");
	}
	else{
		printf("Kalimat ini adalah Tidak Palindrome\n");
	}
}
