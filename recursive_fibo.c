#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fibonacci(int n) {
   if(n <= 1) {
      return n;
   }
   else {
      return (fibonacci(n-1) + fibonacci(n-2));
   }
}

int main(int argc, char *argv[]) {
	
	int n, i;

   printf("Kaçýncý Fibonacci sayýsýný hesaplamak istiyorsunuz?: ");
   scanf("%d", &n);

   printf("%d. Fibonacci sayýsý: %d\n", n, fibonacci(n));
	
	return 0;
}
