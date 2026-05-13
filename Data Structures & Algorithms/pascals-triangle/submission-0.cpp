class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 0)
            return {};
        else if (numRows == 1)
            return {{1}};
        vector<vector<int>> tr;
        tr.push_back({1});
        tr.push_back({1, 1});

        for (int i = 2; i < numRows; i++) {
            int count = 0;
            tr.push_back({1});

            for (int j = 0; j < i - 1; j++) {
                tr[i].push_back(tr[i - 1][j] + tr[i - 1][j + 1]);
            }
            tr[i].push_back({1});
        }

        return tr;
    }
};