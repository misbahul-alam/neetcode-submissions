class Solution {
public:
    const vector<string> com = {"((", "))", "()", ")("};
    vector<string> ans;
    string current;

    bool isValid(string s) {
        int balance = 0;

        for (char c : s) {
            if (c == '(')
                ++balance;
            else
                --balance;

            if (balance < 0)
                return false;
        }

        return balance == 0;
    }

    void backtrack(int n, int i) {
        if (n == i) {
            if (isValid(current))
                ans.push_back(current);
            return;
        }
        for (const string& s : com) {
            current += s;
            backtrack(n, i + 1);
            current.pop_back();
            current.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {

        backtrack(n, 0);
        return ans;
    }
};