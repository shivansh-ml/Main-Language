#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        bool firstRow = false, firstCol = false;

        for(int i = 0; i < m; i++) {
            if(matrix[i][0] == 0) {
                firstCol = true;
                break;
            }
        }

        for(int j = 0; j < n; j++) {
            if(matrix[0][j] == 0) {
                firstRow = true;
                break;
            }
        }

        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        if(firstCol) {
            for(int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }

        if(firstRow) {
            for(int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    sol.setZeroes(matrix);

    for(auto &row : matrix) {
        for(auto &val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
