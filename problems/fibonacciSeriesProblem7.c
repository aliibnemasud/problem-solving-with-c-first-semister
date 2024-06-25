#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    // Input the upper limit from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Print the Fibonacci series up to n
    printf("Fibonacci series up to %d: ", n);

    // The first two terms are always printed
    printf("%d, %d", t1, t2);

    // Calculate the next terms in the series
    nextTerm = t1 + t2;
    while (nextTerm <= n) {
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("\n");

    return 0;
}
