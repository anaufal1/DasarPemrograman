
#include<stdio.h>
#include<string.h>
char s[100]; /*input - string*/
char A[100]={"0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"}; /*set of string*/
void awal();/*function prototypes*/
void cek();/*function prototypes*/
int i,j,temukan;
int main(){
	scanf("%s",s);/*gets the value of s*/
	printf("The string %s represents the numbers:\n",s); /*display a sentences*/
	awal();/*call the function*/
	cek();/*call the function*/
}
void awal(){
	temukan=1;
	for(i=0;i<strlen(s);i++){
		if(s[i]!=A[i]&&s[i]!='x'){temukan=0;break;}/*if one char is different so it's false*/
	}
	if(temukan==1){
		for(i=0;i<strlen(s);i++){
			printf("%c",A[i]); /*display the binary*/
		}
		printf("\n");
	}
}
void cek(){
	for(i=strlen(s)-1;i>=0;i--){
		if(A[i]=='0'){
			A[i]='1'; /*changes the value of A[i]*/
			temukan=0;
			for(j=0;j<strlen(s);j++){
				if(s[j]!=A[j]&&s[j]!='x'){temukan=1;break;}/*if the value is different so it's false*/
			}
			if(temukan==0){
				for(j=0;j<strlen(s);j++){
					printf("%c",A[j]); /*display the binary*/
			}
			printf("\n");
			}
			cek();/*call the functions*/
			return;
		}
		else if(A[i]=='1'){A[i]='0';}/*changes the value of A[i]*/
	}
}

