class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int rows = grid.size();
        int cols = grid[0].size();

        vector<int> D;

        // Convert 2D grid to 1D array
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                D.push_back(grid[i][j]);
            }
        }

        int n = D.size();
        k %= n;

        // Rotate the array to the right by k
        reverse(D.begin(), D.end());
        reverse(D.begin(), D.begin() + k);
        reverse(D.begin() + k, D.end());

        // Convert 1D array back to 2D grid
        vector<vector<int>> ans(rows, vector<int>(cols));

        int idx = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                ans[i][j] = D[idx++];
            }
        }

        return ans;
    }
};