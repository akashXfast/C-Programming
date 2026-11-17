#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in the array are:\n");

    for (i = 0; i < n; i++) {
        int num = arr[i];
        int isPrime = 1;          // assume prime first

        if (num <= 1) {
            isPrime = 0;          // 0, 1, negatives are not prime
        } else if (num == 2) {
            isPrime = 1;          // 2 is prime
        } else if (num % 2 == 0) {
            isPrime = 0;          // even numbers > 2 are not prime
        } else {
            // check odd divisors from 3 to sqrt(num)
            for (j = 3; j <= (int)sqrt(num); j += 2) {
                if (num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}