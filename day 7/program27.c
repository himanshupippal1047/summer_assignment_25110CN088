#include <stdio.h>

// Recursive function
int sumDigits(int n) {
    if (n == 0)
        return 0;   // base case
    else
        return (n % 10) + sumDigits(n / 10);  // recursive call
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;  // handle negative numbers

    printf("Sum of digits of %d = %d\n", num, sumDigits(num));

    return 0;
}
