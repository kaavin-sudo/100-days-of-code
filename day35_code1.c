// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n, a[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int largest = a[0];
    int second = a[1];

    if (second > largest) {
        int temp = largest;
        largest = second;
        second = temp;
    }

    for (int i = 2; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if (a[i] > second) {
            second = a[i];
        }
    }

    printf("%d", second);

    return 0;
}
