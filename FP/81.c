#include<stdio.h>
#include<math.h>
long long int comb(int a, int b, int c, int d){
	long long int i;
	long long int hasil=1;
	for(i=a;i<=b;i++){
		hasil*=i;
		if(d<=c){
			hasil/=d;
			d++;
		}
	}
	return hasil;
}
int main(void){
	int a,b[101],c,cek;
	int n,q,i,j,k[101],d,x,y,e;
	long long int z;
	long long int hasil;
	scanf("%d%d",&n,&q);
	for(i=0;i<n;i++){
		scanf("%d",&k[i]);
	}
	for(i=1;i<=q;i++){
		hasil=1;
		z=1;
		cek=1;
		scanf("%d",&d);
		if(d==1){
			scanf("%d%d",&x,&y);
			k[x-1]+=y;
		}
		else if(d==2){
			for(j=0;j<n;j++){
				scanf("%d",&b[j]);
				if(b[j] > k[j]) cek = 0;
			}
			if(cek == 1){
				for(d=0;d<n;d++){
					if(b[d]!=0){
						c=k[d]-b[d];
						if(c>=b[d]) {
							hasil=((hasil%1000000007)*(comb(c+1,k[d],b[d],1)%1000000007))%1000000007;	
						}
						else{
							hasil=((hasil%1000000007)*(comb(b[d]+1,k[d],c,1)%1000000007))%1000000007;
						}
					}
				}
			}
			else{
				hasil=0;
			}
			printf("%lld\n",hasil);
		}
	}
}
