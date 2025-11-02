#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 0)); 
        // 0 = empty, 1 = guard, 2 = wall, 3 = guarded

        for (auto &g : guards) grid[g[0]][g[1]] = 1;
        for (auto &w : walls) grid[w[0]][w[1]] = 2;

        vector<vector<int>> directions = {{-1,0},{1,0},{0,-1},{0,1}};

        for (auto &g : guards) {
            for (auto &d : directions) {
                int x = g[0], y = g[1];
                while (true) {
                    x += d[0];
                    y += d[1];
                    if (x < 0 || y < 0 || x >= m || y >= n) break;
                    if (grid[x][y] == 1 || grid[x][y] == 2) break;
                    if (grid[x][y] == 0) grid[x][y] = 3;
                }
            }
        }

        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;

    int m = 4, n = 6;
    vector<vector<int>> guards = {{0,0}, {1,1}, {2,3}};
    vector<vector<int>> walls = {{0,1}, {2,2}, {1,4}};

    cout << "Unguarded Cells: " << sol.countUnguarded(m, n, guards, walls) << endl;

    return 0;
}
