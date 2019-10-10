#include<stdio.h>
int main(){
   	int n,i,j,k,arr[100][100],tmp[100][100];
   	char c;
   	scanf("%d",&n);
   	for(i=1;i<=n;i++){
   		for(j=1;j<=n;j++){
   			scanf("%d",&arr[i][j]);
   		}
   	}
   	getchar();
   	while(scanf("%c",&c)!=EOF){
   		if(c=='f'||c=='F'){
   			for(i=1;i<=n;i++){
   				for(j=1;j<=n;j++){
   					tmp[i][j]=arr[i][n-j+1];
   					
   				}
   			}
   		}
		else if(c=='r'||c=='R'){
			for(i=1;i<=n;i++){
				for(j=1;j<=n;j++){
					tmp[i][j]=arr[n-j+1][i];
				}
			}
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(j!=n){
					printf("%d ",tmp[i][j]);
				}
				else{
					printf("%d",tmp[i][j]);
				}
				arr[i][j]=tmp[i][j];
			}
			printf("\n");
		}
		printf("\n");
		getchar();
   	}
}
