#include <stdio.h>
void findSecondMaxMin(int arr[], int n)
{
    if (n < 2)
    {
        printf("Array should have at least 2 elements\n");
        return;
    }
    int max1, max2, min1, min2;
    if (arr[0] > arr[1])
    {
        max1 = arr[0];
        max2 = arr[1];
        min1 = arr[1];
        min2 = arr[0];
    }
    else if (arr[0] < arr[1])
    {
        max1 = arr[1];
        max2 = arr[0];
        min1 = arr[0];
        min2 = arr[1];
    }
    else
    {
        max1 = max2 = arr[0];
        min1 = min2 = arr[0];
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2 && arr[i] != min1)
        {
            min2 = arr[i];
        }
    }
    if (max1 == max2)
    {
        printf("No second largest element exists (all elements are same)\n");
    }
    else
    {
        printf("Second largest element: %d\n", max2);
    }
    if (min1 == min2)
    {
        printf("No second smallest element exists (all elements are same)\n");
    }
    else
    {
        printf("Second smallest element: %d\n", min2);
    }
}
int main()
{
    printf("Name: Shivansh Jha\n");
    printf("Roll: 2330335");
    int arr[] = {1, 5, 6, 2, 1, 9, 4, 2, 7, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\nArray: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    findSecondMaxMin(arr, n);
}