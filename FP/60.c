#include<stdio.h>
int func(int arr[], int a, int largest){
	if(a==0){
		return largest;
	}
	if(arr[a]>largest){
		largest=arr[a];
		return func(arr,a-1,largest);
	}
	else return func(arr,a-1,largest);
}

int main(void){
	int arr[100],i,a,largest;
	printf("Masukkan Jumlah Data Yang ingin di Input : ");
	scanf("%d",&a);
	printf("Masukkan Data nya :\n");
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	largest=arr[0];
	largest=func(arr,a-1,largest);
	printf("Data terbesar yaitu : %d\n",largest);
}
