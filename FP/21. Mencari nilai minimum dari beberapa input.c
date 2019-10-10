#include<Stdio.h>
int min(int a[],int n){
	if (n!=0){
  		if (a[n]<=min(a,n-1)){
   			return a[n];
  }
  else{
   	return min(a,n-1);
  }
 }
 else{
  	return a[0];
 }
}

int main (){
 int n;
    printf ("Ketik banyaknya angka yang akan diinput (1-100) : ");
 scanf("%d",&n);
 int a[n];
 printf ("\n");
 int j;
 printf("Masukkan input: \n");
 for (j=0; j<n; j++){
  scanf ("%d",&a[j]);
 }
 printf ("\nBilangan Minimum = ");
 printf ("%d\n",min(a,n-1));
 return 0;
}
