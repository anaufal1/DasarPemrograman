
#include<stdio.h>
void merge(int *a,  int *b, int c[], int n_a, int n_b, int i, int i_a, int i_b);
int main(void){
	int a[100],b[100],ab[200],i,n_a,n_b;
	
	//masukkan data jumlah array
	printf("Masukkan Jumlah data array yg diinginkan :\n");
	printf("Array ke-1 : ");
	scanf("%d",&n_a);
	printf("Array ke-2 : ");
	scanf("%d",&n_b);
	
	//masukkan data array
	printf("Masukkan data Array yg diinginkan :\n");
	printf("Array ke-1 :\n");
	for(i=0;i<n_a;i++){
		scanf("%d",&a[i]);
	}
	printf("Array ke-2 :\n");
	for(i=0;i<n_b;i++){
		scanf("%d",&b[i]);
	}
	
	//memanggil fungsi untuk menggabung
	merge(a,b,ab,n_a,n_b,0,0,0);
	
	//tampilkan data setelah digabung
	printf("Array Setelah Digabung : ");
	for(i=0;;i++){
		if(ab[i]=='\0') break;
		printf("%d ",ab[i]);
	}
	printf("\n");
}
void merge(int *a,  int *b, int c[], int n_a, int n_b, int i, int i_a, int i_b){
	
	//base case
	if(i_a==n_a){
		if(i_b==n_b){
			c[i]='\0';
			return;
		}
		c[i]=b[0];
		return merge(a,&b[1],c,n_a,n_b,i+1,i_a,i_b+1);
	} 
	else if (i_b==n_b){
		if(i_a==n_a){
			c[i]='\0';
			return;
		}
		c[i]=a[0];
		return merge(&a[1],b,c,n_a,n_b,i+1,i_a+1,i_b);
	}
	
	//jika elemen array pertama lebih kecil maka dipindah dan cek lanjut ke elemen setelahnya
	if(a[0]<b[0]){
		c[i]=a[0];
		return merge(&a[1],b,c,n_a,n_b,i+1,i_a+1,i_b);
	}
	
	//jika elemen array kedua lebih kecil maka dipindah dan cek lanjut ke elemen setelahnya
	else if(b[0]<a[0]){
		c[i]=b[0];
		return merge(a,&b[1],c,n_a,n_b,i+1,i_a,i_b+1);
	}
	
	//jika elemen array pertama dan kedua sama maka dipindah salah satu namun keduanya berlanjut cek nya ke elemen setelahnya
	else if(a[0]==b[0]){
		c[i]=a[0];
		return merge(&a[1],&b[1],c,n_a,n_b,i+1,i_a+1,i_b+1);
	}
}
