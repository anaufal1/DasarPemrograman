#include<stdio.h>
int yplant(int jumlah, int hari){
	if(jumlah>=1 && jumlah<=3){
		if(jumlah==hari) return 1;
		else return yplant(jumlah+1,hari);
	}
	else if(jumlah>=4 && jumlah<=6){
		if(jumlah==hari) return 3;
		else return yplant(jumlah+1,hari)+2*yplant(1,hari-jumlah+1);
	}
	else if(jumlah>=7 && jumlah<=10){
		if(jumlah==hari) return 4;
		else return yplant(jumlah+1,hari)+3*yplant(1,hari-jumlah+1);
	}
	else if(jumlah>=11 && jumlah<=15){
		if(jumlah==hari) return 2;
		else return yplant(jumlah+1,hari)+yplant(1,hari-jumlah+1);
	}
	else if(jumlah==16) return 1;
}
int main(void){
	int a;
	scanf("%d",&a);
	printf("%d\n",yplant(1,a));
}
