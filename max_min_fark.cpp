#include <stdio.h>

int main() {
   int n, i;
   int arr[50];
   int max, min, diff;

   printf("Dizi boyutunu girin: ");
   scanf("%d", &n);

   printf("Diziyi girin: ");
   for(i=0; i<n; i++) {
      scanf("%d", &arr[i]);
   }

   // En büyük ve en küçük elemanlarý bul
   max = arr[0];
   min = arr[0];
   for(i=1; i<n; i++) {
      if(arr[i] > max) {
         max = arr[i];
      }
      if(arr[i] < min) {
         min = arr[i];
      }
   }

   // Farký hesapla ve yazdýr
   diff = max - min;
   printf("En büyük eleman: %d\n", max);
   printf("En küçük eleman: %d\n", min);
   printf("Aralarýndaki fark: %d\n", diff);

   return 0;
}

