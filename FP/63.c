#include<stdio.h>
int main()
{
	long long arr[100000];
	int	i,a,j,k,temp,cek,b,c;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%lld",&arr[i]);
	}
	scanf("%d",&b);
	for(i=0;i<a;i++){
		temp=arr[i];
		c=i;
		for(j=i+1;j<a;j++){
			if(temp>arr[j]){
				temp=arr[j];
				c=j;
			}
		}
		arr[c]=arr[i];
		arr[i]=temp;
		if(i==b-1){
			break;
		}
	}
	printf("%lld\n",arr[b-1]);
	return 0;
}
