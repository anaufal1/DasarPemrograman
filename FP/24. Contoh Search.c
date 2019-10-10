#include<stdio.h>

int main(){
	int arr[10]= { 6, 1, 5, 2, 9, 3, 8, 4, 7, 0};
	int i,j,n,temp,flag;
	n=10;
	for(i=0;i<n;i++){
		flag = 1;
		for(j=n-1 ; j>=i ; j--){
			if(arr[j] < arr[j-1]){
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
				flag=0;
			}
			if(flag==1)break;
		}
		for(i=0 ; i<n ; i++){
			printf("%d",arr[i]);
		}
	}
	return 0;
}
