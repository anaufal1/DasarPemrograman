#include<stdio.h>
int A[100][100],a,b;
void cek(int x,int y);/*function prototypes*/
int main(){
	int i,j,blops;
	scanf("%d %d",&a,&b); /*gets the value*/
	printf("Fill the the data:\n");/*display the sentence*/
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			scanf("%d",&A[i][j]);/*gets the value from 1 to a*b*/
		}
	}
	blops=0;
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			if(A[i][j]==1){
				blops++; /*increase blops by 1*/
				cek(i,j);/*call the function*/
			}
		}
	}
	/*display the value of blops*/
	if(blops>1){printf("This data shows a greed with %d blops\n",blops);}
	else{printf("This data shows a greed with %d blop\n",blops);}
}

void cek(int x,int y){
	
	if(x<0||x>a||y>b||y<0||A[x][y]==0){return;}/*the function is terminate if it meets one of this condition*/
	else{
		A[x][y]=0;/*change the value to 0"*/
		/*line 33 to 40 call the function*/
		cek(x,y+1);
		cek(x,y-1);
		cek(x+1,y);
		cek(x+1,y+1);
		cek(x+1,y-1);
		cek(x-1,y);
		cek(x-1,y-1);
		cek(x-1,y+1);
	}
}

