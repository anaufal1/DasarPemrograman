#include <stdio.h>
#include <math.h>

int main(){
	int absis=0,ordinat=0;
	int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8,x9,y9,x10,y10;
	double hasil;
	long long a,b;

	scanf("%d %d",&x1,&y1);
	scanf("%d %d",&x2,&y2);
	scanf("%d %d",&x3,&y3);
	scanf("%d %d",&x4,&y4);
	scanf("%d %d",&x5,&y5);
	scanf("%d %d",&x6,&y6);
	scanf("%d %d",&x7,&y7);
	scanf("%d %d",&x8,&y8);
	scanf("%d %d",&x9,&y9);
	scanf("%d %d",&x10,&y10);
	absis=x1+x2+x3+x4+x5+x6+x7+x8+x9+x10;
	ordinat=y1+y2+y3+y4+y5+y6+y7+y8+y9+y10;
	a=absis*absis;
	b=ordinat*ordinat;
	hasil=a+b;
	hasil=sqrt(hasil);

	printf("%.2lf\n",hasil);

	if ((absis==0) && (ordinat>0)){
		printf("Utara");
	}
	
	else if ((absis>0) && (ordinat>0)){
		printf("Timur Laut");
	}
	
	else if ((absis>0) && (ordinat==0)){
		printf("Timur");
	}
	
	else if ((absis>0) && (ordinat<0)){
		printf("Tenggara");
	}
	
	else if ((absis==0) && (ordinat<0)){
		printf("Selatan");
	}
	
	else if ((absis<0) && (ordinat<0)){
		printf("Barat Daya");
	}
	
	else if ((absis<0) && (ordinat==0)){
		printf("Barat");
	}
	
	else if ((absis<0) && (ordinat>0)){
		printf("Barat Laut");
	}
	
	else{
		printf("Tidak Berubah");
	}
	
	printf("\n");
	
	return 0;
	
}
