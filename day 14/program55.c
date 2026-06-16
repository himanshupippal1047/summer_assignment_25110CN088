#include <stdio.h>

int main() {
    int n, i, first, second;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    first = second = -99999; // assume very small

    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second == -99999)
        printf("No second largest element\n");
    else
        printf("Second largest element = %d\n", second);

    return 0;
}
