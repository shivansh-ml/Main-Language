#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

long long comparisonCount = 0;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        comparisonCount++;
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    free(L);
    free(R);
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int readFile(const char *filename, int arr[]) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("Error opening file %s\n", filename);
        return 0;
    }
    int n = 0;
    while (fscanf(fp, "%d", &arr[n]) != EOF) {
        n++;
    }
    fclose(fp);
    return n;
}

void writeFile(const char *filename, int arr[], int n) {
    FILE *fp = fopen(filename, "w");
    for (int i = 0; i < n; i++) fprintf(fp, "%d ", arr[i]);
    fclose(fp);
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int choice;
    printf("MAIN MENU (MERGE SORT)\n");
    printf("1. Ascending Data\n2. Descending Data\n3. Random Data\n4. ERROR (EXIT)\n");
    printf("Enter option: ");
    scanf("%d", &choice);

    char inFile[20], outFile[25];
    if (choice == 1) { strcpy(inFile, "inAsce.dat"); strcpy(outFile, "outMergeAsce.dat"); }
    else if (choice == 2) { strcpy(inFile, "inDesc.dat"); strcpy(outFile, "outMergeDesc.dat"); }
    else if (choice == 3) { strcpy(inFile, "inRand.dat"); strcpy(outFile, "outMergeRand.dat"); }
    else { printf("Exiting...\n"); return 0; }

    int arr[1000];
    int n = readFile(inFile, arr);
    printf("Before Sorting:\n");
    displayArray(arr, n);

    comparisonCount = 0;
    clock_t start = clock();
    mergeSort(arr, 0, n - 1);
    clock_t end = clock();

    double duration = ((double)(end - start) / CLOCKS_PER_SEC) * 1000000000.0; // ns

    printf("After Sorting:\n");
    displayArray(arr, n);
    printf("Number of Comparisons: %lld\n", comparisonCount);
    printf("Execution Time: %.0f nanoseconds\n", duration);

    writeFile(outFile, arr, n);

    return 0;
}
