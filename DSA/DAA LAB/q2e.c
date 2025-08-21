#include <stdio.h>


void towerOfHanoi(int n, char fromRod, char toRod, char auxRod) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", fromRod, toRod);
        return;
    }
    towerOfHanoi(n - 1, fromRod, auxRod, toRod);
    printf("Move disk %d from rod %c to rod %c\n", n, fromRod, toRod);
    towerOfHanoi(n - 1, auxRod, toRod, fromRod);
}

int main() {
    int n;
    printf("Name: Shivansh Jha\nRoll No: 2330335\n");
    printf("Enter number of disks: ");
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
