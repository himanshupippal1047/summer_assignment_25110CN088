#include <stdio.h>

int main() {
    long long num;
    int i, largestPrime = -1;

    printf("Enter a number: ");
    scanf("%lld", &num);
    while(num % 2 == 0) {
        largestPrime = 2;
        num /= 2;
    }

    for(i = 3; i * i <= num; i += 2) {
        while(num % i == 0) {
            largestPrime = i;
            num /= i;
        }
    }

    
    if(num > 2)
        largestPrime = num;

    printf("Largest prime factor is: %d\n", largestPrime);

    return 0;
}
