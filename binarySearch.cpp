#include <stdio.h>

// Sıralı dizi ve aranacak elemanın değerini alarak binary search işlemi gerçekleştiren fonksiyon
int binarySearch(int arr[], int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2; // orta noktanın hesaplanması
        if (arr[mid] == x) // eğer orta nokta aranan eleman ise
            return mid;
        else if (arr[mid] > x) // aranan eleman orta noktanın solunda ise
            return binarySearch(arr, low, mid - 1, x);
        else // aranan eleman orta noktanın sağında ise
            return binarySearch(arr, mid + 1, high, x);
    }
    // eğer aranan eleman dizide yoksa
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Eleman bulunamadi!");
    else
        printf("Eleman %d. indiste bulundu.", result);
    return 0;
}
