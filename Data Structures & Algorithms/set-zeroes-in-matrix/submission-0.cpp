class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> zeros;
        int row = matrix.size(), col = matrix[0].size();

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == 0) {
                    zeros.push_back({i, j});
                }
            }
        }

        for (auto& p : zeros) {
            int r = p.first, c = p.second;

            for (int j = 0; j < col; j++)
                matrix[r][j] = 0;
            for (int i = 0; i < row; i++)
                matrix[i][c] = 0;
        }
    }
};