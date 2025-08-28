#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int total_duplicates;
    int most_freq_number;
    int max_count;
} DuplicatesResult;
DuplicatesResult analyze_duplicates(int arr[], int n)
{
    DuplicatesResult result;
    int arr2[n];
    int k = 0;
    result.total_duplicates = 0;
    result.max_count = 0;
    result.most_freq_number = 0;
    for (int i = 0; i < n; i++)
    {
        int already_checked = 0;
        for (int x = 0; x < k; x++)
        {
            if (arr[i] == arr2[x])
            {
                already_checked = 1;
                break;
            }
        }
        if (!already_checked)
        {
            int count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] == arr[i])
                {
                    count++;
                }
            }
            if (count > 1)
            {
                result.total_duplicates++;
            }
            arr2[k++] = arr[i];
            if (count > result.max_count)
            {
                result.max_count = count;
                result.most_freq_number = arr[i];
            }
        }
    }
    return result;
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    DuplicatesResult result = analyze_duplicates(arr1, n);
    printf("Total number of duplicate elements: %d\n", result.total_duplicates);
    if (result.max_count > 1)
    {
        printf("Most repeating element: %d (appeared %d times)\n", result.most_freq_number,
               result.max_count);
    }
    else
    {
        printf("No duplicates found.\n");
    }
    printf("Name: Shivansh Jha\n");
    printf("Roll: 2330335");
}