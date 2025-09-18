#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // take size of matrix
    cout<<"Input value\n";
    int a[100][100]; // assume max 100 for demo
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Step 1: Transpose
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    // Step 2: Reverse each row (for 90° clockwise)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = a[i][j];
            a[i][j] = a[i][n - 1 - j];
            a[i][n - 1 - j] = temp;
        }
    }

    // Output
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
