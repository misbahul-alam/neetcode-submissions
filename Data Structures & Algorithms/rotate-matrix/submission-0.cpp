class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> vec;

        for (int i = 0; i < n; i++) {
            vec.push_back({});
            for (int j = n - 1; j >= 0; j--) {
                vec[i].push_back(matrix[j][i]);
            }
        }

        matrix = vec;
    }
};