#include<stdio.h>
#include<string.h>
int main()
{
	char key[100],asli[100],baru[100],kata_baru[100],hasil[100];
	asli[0]='A';		asli[5]='F';		asli[10]='K';		asli[15]='P';		asli[20]='U';	asli[25]='Z';
	asli[1]='B';		asli[6]='G';		asli[11]='L';		asli[16]='Q';		asli[21]='V';
	asli[2]='C';		asli[7]='H';		asli[12]='M';		asli[17]='R';		asli[22]='W';
	asli[3]='D';		asli[8]='I';		asli[13]='N';		asli[18]='S';		asli[23]='X';
	asli[4]='E';		asli[9]='J';		asli[14]='O';		asli[19]='T';		asli[24]='Y';
	int i,j,k,m,n,cek;
	scanf("%s",key); getchar();
	n=strlen(key);
	for(i=0;i<n;i++){
		baru[i]=key[i];
	}
	for(i=0;i<26;i++){
		cek=1;
		for(j=0;j<n;j++){
			if(asli[i]==key[j]){
				cek=0;
				break;
			}
		}
		if(cek==1){
			baru[n]=asli[i];
			n++;
		}
	}
	scanf("%d",&k);getchar();
	for(j=0;j<k;j++){
		gets(kata_baru);
		m=strlen(kata_baru);
		for(i=0;i<m;i++){
			if(kata_baru[i]>=65&&kata_baru[i]<=90){
				printf("%c",baru[kata_baru[i]-65]);
			}
			else{
				printf("%c",kata_baru[i]);
			}
		}
		printf("\n");
	}
}
