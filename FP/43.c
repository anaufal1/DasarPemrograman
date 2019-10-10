#include<stdio.h>
#include<string.h>
int palindrome(char *arr,int n); //Prototype
int main(void){
	char arr[100],a,ar[100];
	int i,b,c,d;
	gets(arr); //input kata/kalimat
	b=strlen(arr);
	
	//mengubah menjadi huruf kecil semua
	for(i=0;i<b;i++){
		if(isalpha(arr[i]))
			if(isupper(arr[i]))
				arr[i]=tolower(arr[i]);
	}
	
	//menghilangkan segala tanda maupun spasi
	d=b;
	for(i=0;i<=d;){
		if(i==d){
			ar[i]='\0';
			break;
		}
		for(c=i;c<b;c++){
			if(arr[c]>='a' && arr[c]<='z' || arr[c]>='0' && arr[c]<='9'){
				ar[i]=arr[c];
				i++;
			}
			else{
				d-=1;
			}
		}
	}
	//output program
	d=strlen(ar);
	if(palindrome(ar,d)){
		printf("Kalimat/Kata ini adalah Palindrome\n");
	}
	else{
		printf("Kalimat/Kata ini adalah Tidak Palindrome\n");
	}
}
int palindrome(char *arr,int n){
	int i,a;
	if(n==0 || n==1) return 1; //base case
	else if(arr[0]!=arr[n-1]) return 0; //base case
	else if(arr[0]==arr[n-1]){ //if the first and last letter is the same call function again to check the next letter
		if(n==1) return 1;
		return palindrome(&arr[1] , n-2);
	}
}
