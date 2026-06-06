#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0)
        return rev;   // base case
    else
        return reverseNumber(n / 10, rev * 10 + (n % 10));
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Reverse of %d = -%d\n", num, reverseNumber(-num, 0));
    else
        printf("Reverse of %d = %d\n", num, reverseNumber(num, 0));

    return 0;
}
