class Solution {
public:
    void combinations(vector<vector<int>>& ans, vector<int>& com, int n, int k,
                      int idx) {
        if (com.size() == k) {
            ans.push_back(com);
            return;
        }
        for (int i = idx; i <= n; i++) {
            com.push_back(i);
            combinations(ans, com, n, k, i + 1);
            com.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> com;
        combinations(ans, com, n, k, 1);

        return ans;
    }
};