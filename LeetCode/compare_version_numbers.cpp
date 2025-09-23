#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s = "1.0.1";
    string v = "1";
    
    // Use empty vectors and push_back for correct and efficient population
    vector<int> arr1;
    vector<int> arr2;
    
    long long n = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '.') {
            n = n * 10 + (s[i] - '0');
        } else {
            arr1.push_back(n);
            n = 0;
        }
    }
    arr1.push_back(n);

    long long m = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != '.') {
            m = m * 10 + (v[i] - '0');
        } else {
            arr2.push_back(m);
            m = 0;
        }
    }
    arr2.push_back(m);

    // The 'k' and 'j' variables and the 'reverse' calls are no longer needed
    // because push_back populates the vectors in the correct order.

    for (int x : arr1) {
        cout << x << ",";
    }
    cout << endl;
    for (int x : arr2) {
        cout << x << ",";
    }
    cout << endl;

    // Compare up to the maximum size, treating missing revisions as 0
    int max_size = max(arr1.size(), arr2.size());
    for (int i = 0; i < max_size; i++) {
        int val1 = (i < arr1.size()) ? arr1[i] : 0;
        int val2 = (i < arr2.size()) ? arr2[i] : 0;

        if (val1 > val2) {
            cout << "1";
            return 1;
        } else if (val1 < val2) {
            cout << "-1";
            return -1;
        }
    }

    cout << "0";
    return 0;
}

/*
2. How '0' works
Characters in C++ have integer ASCII values.
'0' → 48
'1' → 49
'2' → 50
… and so on
So if you do '3' - '0' → 51 - 48 = 3 (an integer)
*/