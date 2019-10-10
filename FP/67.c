#include<stdio.h>
int main ()
{
	int arr[100],i,a,b,cek,awal,akhir,tengah,j,temp;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++){
		cek=1;
		for(j=a-1;j>i;j--){
			if(arr[j-1]>arr[j]){
				cek=0;
				temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
			}
		}
		if(cek==1){
			break;
		}
	}
	for(i=0;i<a;i++){
		printf("%d\n",arr[i]);
	}
	scanf("%d",&b);
	cek=0;
	awal=arr[0];
	akhir=arr[a-1];
	if(awal==b||akhir==b){
		cek=1;
	}
	if(cek==0){
		for(i=0;i<sizeof(arr)/sizeof(int);i++){
			tengah=(awal+akhir)/2;
			if(tengah==b){
				cek=1;
			}
			else if(b<tengah){
				akhir=tengah;
			}
			else if(b>tengah){
				awal=tengah;
			}
			if(cek==1){
				break;
			}
		}
	}
	if(cek==1){
		printf("KETEMU\n");
	}
	else{
		printf("Not FOUND\n");
	}
}
