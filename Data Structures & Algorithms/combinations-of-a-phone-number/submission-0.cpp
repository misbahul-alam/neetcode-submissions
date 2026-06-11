class Solution {
public:
    const vector<string> keypad = {"",    "",    "abc",  "def", "ghi",
                                   "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void backtrack(const string& digits, int pos, string& current,
                   vector<string>& ans) {
        if (pos == digits.size()) {
            ans.push_back(current);
            return;
        }

        for (char ch : keypad[digits[pos] - '0']) {
            current.push_back(ch);
            backtrack(digits, pos + 1, current, ans);
            current.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};

        vector<string> ans;
        string current;
        current.reserve(digits.size());

        backtrack(digits, 0, current, ans);
        return ans;
    }
};