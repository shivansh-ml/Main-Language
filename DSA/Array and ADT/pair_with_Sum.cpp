#include <iostream>
using namespace std;
//For unsorted array
// int main() {
//     int a[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
//     int n = sizeof(a)/sizeof(a[0]);
//     int k = 10;

//     int max = 12;  // maximum element in array
//     int H[13] = {0}; // hash array (0 initialized)

//     for (int i = 0; i < n; i++) {
//         int complement = k - a[i];
//         if (complement >= 0 && H[complement] == 1) {
//             cout << "Pair found: (" << a[i] << ", " << complement << ")\n";
//         }
//         H[a[i]] = 1;  // mark current element
//     }

//     return 0;
// }
//For sorted array
#include <iostream>
using namespace std;

int main() {
    int a[] = {1,2,3,4,6,7,9,10,11,12};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 10;

    int i = 0;        // left pointer (smallest element)
    int j = n - 1;    // right pointer (largest element)

    while (i < j) {
        int sum = a[i] + a[j];

        if (sum == k) {
            cout << "Pair found: (" << a[i] << ", " << a[j] << ")\n";
            i++;  // move left pointer forward
            j--;  // move right pointer backward
        }
        else if (sum < k) {
            i++;  // increase sum by moving left pointer right
        }
        else {
            j--;  // decrease sum by moving right pointer left
        }
    }

    return 0;
}
