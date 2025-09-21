#include <iostream>
#include <vector>
using namespace std;

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         if (nums.empty()) return 0;

//         int i = 0; // slow pointer
//         for (int j = 1; j < nums.size(); j++) {
//             if (nums[j] != nums[i]) {
//                 i++;
//                 nums[i] = nums[j];
//             }
//         }
//         return i + 1; // length of unique part
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
//     int k = sol.removeDuplicates(nums);

//     cout << "k = " << k << endl;
//     cout << "Modified array: ";
//     for (int i = 0; i < k; i++) {
//         cout << nums[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(int *n, int k);
int main()
{
    cout << "Enter size of array:";
    int k;
    cin >> k;
    int *n = new int[k];
    cout << "Enter numbers in array:";
    for (int i = 0; i < k; i++)
    {
        cin >> n[i];
    }
    // array is in sorted order
    int new_index = removeDuplicates(n, k);
    for (int i = 0; i < new_index; i++)
    {
        cout << n[i] << " ";
    }
}

int removeDuplicates(int *n, int k)
{
    if(k==0) return 0;
    int count =k;
    for (int i = 0; i < count-1; i++)
    {
        while (i < count - 1 && n[i] == n[i + 1])
        {
            // shift elements left
            for (int j = i; j < count - 1; j++)
            {
                n[j] = n[j + 1];
            }
            count--; // reduce logical size
        }
    }
    return count;
}