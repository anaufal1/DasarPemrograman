#include<stdio.h>
int main(){
	long long int i, hi, t, j, k, max;
	int jumlah;
	scanf("%lld", &t);
	for(j = 0; j < t; j++){
		scanf("%lld", &k);
		max = 0;
		jumlah = 0;
		if(k == 0){
			jumlah = 0;
		}
		for(i = 1; i <= k; i++){
			scanf("%lld", &hi);
			if(hi >= max){
				if(hi > max){
					max = hi;
					jumlah = 1;
				}
				else if(hi == max){
					jumlah += 1;
				}
			}
		}
		printf("%d\n", jumlah);
	}
}
