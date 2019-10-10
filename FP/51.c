#include<stdio.h>
#include<stdlib.h>
#define size 10
 
int binsearch(int[], int, int, int);
 
int main() {
   int num, i, key, position;
   int awal, akhir, list[size];
 
   //input jumlah data
   printf("\nMasukkan jumlah data yang diinginkan :\n");
   scanf("%d", &num);
 
   //input data
   printf("\nMasukkan data yang diinginkan :\n");
   for (i = 0; i < num; i++) {
      scanf("%d", &list[i]);
   }
 
   awal = 0;
   akhir = num - 1;
   
   //input data yang ingin dicari
   printf("\nMasukkan data yang ingin di cari :\n");
   scanf("%d", &key);
 
   position = binsearch(list, key, awal, akhir);
 
   //output ketemu atau tidak
   if (position != -1) {
      printf("\nData berada pada posisi %d", (position + 1));
   } else
      printf("\nData tersebut tidak ada dalam array\n");
   return (0);
}
 
// Binary Search function
int binsearch(int a[], int x, int awal, int akhir) {
   int tengah;
 
   if (awal > akhir)
      return -1;
 
   tengah = (awal + akhir) / 2;
 
   if (x == a[tengah]) {
      return (tengah);
   } else if (x < a[tengah]) {
      binsearch(a, x, awal, tengah - 1);
   } else {
      binsearch(a, x, tengah + 1, akhir);
   }
}
