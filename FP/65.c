#include<stdio.h>
#include<string.h>
struct a{
	int nomor;
	char nama[20];
	int betul;
	int salah;
	double nilai;
}data[10];
int main()
{
	int i,j,k,l,tim,b;
	int temp;
	double temp2;
	char temp3[100];
	scanf("%d",&tim);
	for(i=0;i<tim;i++){
		scanf("%d%s%d%d",&data[i].nomor,&data[i].nama,&data[i].betul,&data[i].salah);
	}
	for(i=0;i<tim;i++){
		data[i].nilai=(4*(double)(data[i].betul))-(1.5*(double)(data[i].salah));
	}
	for(i=0;i<tim;i++){
		for(j=i+1;j<tim;j++){
			if(data[i].nilai<=data[j].nilai){
				if(data[i].nilai<data[j].nilai){
					temp=data[j].nomor;
					data[j].nomor=data[i].nomor;
					data[i].nomor=temp;
					strcpy(temp3,data[j].nama);
					strcpy(data[j].nama,data[i].nama);
					strcpy(data[i].nama,temp3);
					temp2=data[j].nilai;
					data[j].nilai=data[i].nilai;
					data[i].nilai=temp2;
				}
				else if(data[i].nilai==data[j].nilai){
					if(data[i].nomor>data[j].nomor){
						temp=data[j].nomor;
						data[j].nomor=data[i].nomor;
						data[i].nomor=temp;
						strcpy(temp3,data[j].nama);
						strcpy(data[j].nama,data[i].nama);
						strcpy(data[i].nama,temp3);
						temp2=data[j].nilai;
						data[j].nilai=data[j].nilai;
						data[i].nilai=temp2;
					}
				}
			}
		}
	}
	for(i=0;i<tim;i++){
		printf("%d %s %.1f\n",data[i].nomor,data[i].nama,data[i].nilai);
	}
}
