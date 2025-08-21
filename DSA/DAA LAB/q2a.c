#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Name: Shivansh Jha\nRoll No: 2330335\n");
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Factorial of %d is %lld\n", n, factorial(n));
    return 0;
}