#include <stdio.h>

int main() {
    int n, binary[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        binary[i] = n % 2;   // store remainder
        n = n / 2;           // update quotient
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    return 0;
}
