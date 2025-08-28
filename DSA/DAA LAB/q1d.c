#include <stdio.h>
void rotate_right(int A[], int b, int z)
{
    printf("\n");
    printf("After rotate: ");
    printf("%d ", A[b - 1]);
    for (int i = 0; i < (b - 1); i++)
    {
        printf("%d ", A[i]);
    }
    for (int k = b; k < z; k++)
    {
        printf("%d ", A[k]);
    }
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d: ", i);
        scanf("%d", &A[i]);
    }
    int b;
    printf("Number of elements to rotate right: ");
    scanf("%d", &b);
    printf("Before rotate: ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", A[j]);
    }
    printf("\n");
    rotate_right(A, b, n);
    printf("\nName: Shivansh Jha\n");
    printf("Roll: 2330335");
}