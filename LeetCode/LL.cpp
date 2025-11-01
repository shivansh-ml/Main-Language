#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Solution Class
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s(nums.begin(), nums.end());
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        while (prev->next != nullptr) {
            if (s.count(prev->next->val)) {
                prev->next = prev->next->next;  // Delete node
            } else {
                prev = prev->next;  // Move forward
            }
        }
        return dummy->next;
    }
};

// Helper function to create a linked list from vector
ListNode* createList(vector<int> arr) {
    if (arr.empty()) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}

// Helper function to print linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Main Function
int main() {
    // Example input:
    vector<int> nums = {1, 3, 4};      // Values to delete
    vector<int> listValues = {1, 2, 3, 4, 5};  // Linked list

    ListNode* head = createList(listValues);

    cout << "Original List: ";
    printList(head);

    Solution obj;
    head = obj.modifiedList(nums, head);

    cout << "Modified List: ";
    printList(head);

    return 0;
}
