#include<stdio.h>
int modus1(int arr[], int cek[], int a, int b, int mode){
	int i;
	if (b==a){
		return mode;
	}
	else{
		cek[b]=0;
		for(i=0;i<a;i++){
			if(arr[b]==arr[i]){
				cek[b]+=1;
			}
		}
		if(cek[b]>=cek[b-1]){
			if(cek[b]>cek[b-1]){
				mode=arr[b];
			}
			else if(cek[b]==cek[b-1]){
				if(arr[b]>arr[b-1]) mode=arr[b];
			}
		}
		return modus1(arr,cek,a,b+1,mode);
	}
}

int main(void){
	int arr[100],i,j,a,modus,flag[100],temp;
	printf("Masukkan Jumlah Data Yang ingin di Input : ");
	scanf("%d",&a);
	printf("Masukkan Data nya :\n");
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++){
		for(j=i+1;j<a;j++){
			if(arr[i]>=arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	modus=modus1(arr,flag,a,0,arr[0]);
	printf("Modus dari data tersebut adalah : %d",modus);
}
