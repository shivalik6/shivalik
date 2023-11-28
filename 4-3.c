#include <stdio.h>

int main() {
    int i, n, max = 1, num;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        max = (num > max) ? num : max;
    }

    printf("Maximum of given numbers is: %d\n", max);

    return 0;
}
