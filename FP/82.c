#include<stdio.h>
#include<string.h>
struct data{
	char nama[100];
	char nrp[100];
}datake[100];
int main()
{
	int i,a,cek,j,k,b;
	char temp[100],temp2[100];
	printf("Masukkan Jumlah Data Yang Ingin Dimasukkan\t: ");
	scanf("%d",&a);getchar();
	for(i=0;i<a;i++){
		printf("Masukkan Nama Mahasiswa ke-%d\t: ",i+1);
		gets(datake[i].nama);
		printf("Masukkan NRP Mahasiswa ke-%d\t: ",i+1);
		gets(datake[i].nrp);
	}
	printf("Pilih Ingin Diurutkan Sesuai Apa? (1.NRP/2.Nama)\t: ");
	scanf("%d",&b);
	if(b==2){
		for(i=0;i<a;i++){
			cek=1;
			for(j=a-1;j>=i;j--){
				if(strcmp(datake[j-1].nama,datake[j].nama)>=0){
					cek=0;
					strcpy(temp,datake[j-1].nama);
					strcpy(datake[j-1].nama,datake[j].nama);
					strcpy(datake[j].nama,temp);
					strcpy(temp2,datake[j-1].nrp);
					strcpy(datake[j-1].nrp,datake[j].nrp);
					strcpy(datake[j].nrp,temp2);
				//	break;
				}
			}
			if(cek==1){
				break;
			}
		}
	}
	else if(b==1){
		for(i=0;i<a;i++){
			cek=1;
			for(j=a-1;j>=i;j--){
				if(strcmp(datake[j-1].nrp,datake[j].nrp)>=0){
					cek=0;
					strcpy(temp,datake[j-1].nama);
					strcpy(datake[j-1].nama,datake[j].nama);
					strcpy(datake[j].nama,temp);
					strcpy(temp2,datake[j-1].nrp);
					strcpy(datake[j-1].nrp,datake[j].nrp);
					strcpy(datake[j].nrp,temp2);
					break;
				}
			}
			if(cek==1){
				break;
			}
		}
	}
	for(i=0;i<a;i++){
		printf("\nNama Mahasiswa ke-%d\t: %s\n",i+1,datake[i].nama);
		printf("NRP Mahasiswa ke-%d\t: %s\n\n",i+1,datake[i].nrp);
	}
}
