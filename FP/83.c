#include<stdio.h>
#include<string.h>
int main ()
{
	int n,m,i,j,o,x,a,b;
	scanf("%d",&n);getchar();
	unsigned long long arr[n];
	unsigned long long jumlah[n];
	jumlah[0]=0;
	for(i=1;i<=n;i++){
		scanf("%lld",&arr[i]);
		jumlah[i]=jumlah[i-1]+arr[i];
	}
	scanf("%d",&m);getchar();
	int hasil[m];
	for(j=1;j<=m;j++){
		hasil[j]=0;
		scanf("%d%d",&a,&b);
		hasil[j]=jumlah[b]-jumlah[a-1];
	}
	for(i=1;i<=m;i++){
		printf("Jawaban soal ke-%d : %lld\n",i,hasil[i]);
	}
}
