#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d: ", i);
        scanf("%d", &arr1[i]);
    }
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = 0;
        for (int j = 0; j <= i; j++)
        {
            arr2[i] += arr1[j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\nName: Shivansh Jha\n");
    printf("Roll: 2330335");
}