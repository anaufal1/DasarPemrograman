#include<stdio.h>
#include<string.h>
char s[100];/*input string*/
void one_ele_subs(int a, int b);/*function prototypes*/
void two_ele_subs(int x,int y,int z);/*function prototypes*/
void three_ele_subs(int j,int k,int l,int m);/*function prototypes*/
int main(){
	scanf("%s",s);/*gets string*/
	printf("List all of one-element of '%s':\n", s);/*display the sentences*/
	one_ele_subs(0,strlen(s)-1);/*call the function*/
	printf("\n");
	printf("List all of two-element of '%s':\n", s);/*display the sentences*/
	two_ele_subs(0,1,strlen(s)-1);/*call the function*/
	printf("\n");
	printf("List all of three-element of '%s':\n", s);/*display the sentences*/
	three_ele_subs(0,1,2,strlen(s)-1);/*call the function*/
}

void one_ele_subs(int a, int b){
	if(a==b){printf("{%c}\n",s[a]);}/*display the last value*/
	else{printf("{%c}\n",s[a]);one_ele_subs(a+1,b);}/*display the value and call the functionn*/
}
void two_ele_subs(int x,int y,int z){
	if(x==z-1&&y>=z){printf("{%c, %c}\n",s[x],s[y]);}/*display the last value*/
	else{
		/*display the value and call the functionn*/
		printf("{%c, %c}\n",s[x],s[y]);
		if(y==z){two_ele_subs(x+1,x+2,z);}
		else{two_ele_subs(x,y+1,z);}
	}
}
void three_ele_subs(int j,int k,int l,int m){
	if(j==m-2&&l>=m&&k==m-1){printf("{%c, %c, %c}\n",s[j],s[k],s[l]);}/*display the last value*/
	else{
		/*display the value and call the functionn*/
		printf("{%c, %c, %c}\n",s[j],s[k],s[l]);
		if(l==m){
			if(k+1!=m){three_ele_subs(j,k+1,k+2,m);}
			else{three_ele_subs(j+1,j+2,j+3,m);}
		}
		else{
			three_ele_subs(j,k,l+1,m);
		}
	}
}

