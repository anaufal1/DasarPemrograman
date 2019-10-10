#include<stdio.h>
#include<string.h>
int main(){
	char arr[100],temp[100];
	int a,b,c;
	gets(arr);
	strcpy(temp,arr);
	if(strcmp(temp,strrev(arr))==0){
		printf("PALINDROME");
	}
	else{
		printf("TIDAK PALINDROME");
	}
	
}
