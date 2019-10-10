#include<stdio.h>
#include<string.h>
struct dat{
	int arr[100][100];
}data[100];
int main()
{
	int i,j,k,a,b[100],cek[100],hasil[100],temp1,temp2,awal;
	scanf("%d",&a);
	for(k=1;k<=a;k++){
		scanf("%d",&b[k]);
		for(i=1;i<=b[k];i++){
			for(j=1;j<=2;j++){
				scanf("%d",&data[k].arr[i][j]);
			}
		}
	}
	for(k=1;k<=a;k++){
		for(i=1;i<=b[k];i++){
			for(j=i+1;j<=b[k];j++){
				if(data[k].arr[i][2]>=data[k].arr[j][2]){
					if(data[k].arr[i][2]>data[k].arr[j][2]){
						temp1=data[k].arr[i][2];
						data[k].arr[i][2]=data[k].arr[j][2];
						data[k].arr[j][2]=temp1;
						temp2=data[k].arr[i][1];
						data[k].arr[i][1]=data[k].arr[j][1];
						data[k].arr[j][1]=temp2;
					}
					else if(data[k].arr[i][2]==data[k].arr[j][2]){
						if(data[k].arr[i][1]>data[k].arr[j][1]){
							temp1=data[k].arr[i][2];
							data[k].arr[i][2]=data[k].arr[j][2];
							data[k].arr[j][2]=temp1;
							temp2=data[k].arr[i][1];
							data[k].arr[i][1]=data[k].arr[j][1];
							data[k].arr[j][1]=temp2;
						}
					}
				}
			}
		}
	}
	for(k=1;k<=a;k++){
		cek[k]=1;
		awal=1;
		for(i=awal+1;i<=b[k];i++){
			if(data[k].arr[awal][2]<=data[k].arr[i][1]){
				cek[k]+=1;
				awal=i;
			}
		}
	}
	for(k=1;k<=a;k++){
		printf("%d\n",cek[k]);
	}
}
