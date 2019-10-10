#include<stdio.h>

int main(){
	int arr[10] = {3,2,1,5,4,10,7,9,8,6};
	int i,j,n,temp;
	n = 10;
	for(i=0;i<n;i++){
		for(j=n-1 ; j>=1 ; j--){
			if(arr[j] < arr[j-1]){
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}
	for(i=0 ; i<n ; i++){
		printf("%d", arr[i]);
	}
	return 0;
}
