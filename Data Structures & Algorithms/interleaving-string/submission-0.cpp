class Solution {
public:
    vector<vector<int>> dp;
    bool backtrac(string s1, string s2, string s3, int i, int j) {
        int idx = i + j;

        if (idx == s3.size()) {
            return i == s1.size() && j == s2.size();
        }

        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        char ch = s3[idx];
        bool ans = false;

        if (i < s1.size() && j < s2.size() && ch == s1[i] && ch == s2[j]) {
            ans = backtrac(s1, s2, s3, i + 1, j) ||
                  backtrac(s1, s2, s3, i, j + 1);
        } else if (i < s1.size() && ch == s1[i]) {
            ans = backtrac(s1, s2, s3, i + 1, j);
        } else if (j < s2.size() && ch == s2[j]) {
            ans = backtrac(s1, s2, s3, i, j + 1);
        }

        return dp[i][j] = ans;
    }

    bool isInterleave(string s1, string s2, string s3) {
        if (s1.size() + s2.size() != s3.size()) {
            return false;
        }

        dp.assign(s1.size() + 1, vector<int>(s2.size() + 1, -1));
        return backtrac(s1, s2, s3, 0, 0);
    }
};