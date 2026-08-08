class Solution {
private:
    bool isPermutation(string s1, string s2) {
        if (s1.size() != s2.size())
            return false;
        return is_permutation(s1.begin(), s1.end(), s2.begin());
    }

public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        if (s2.size() < n)
            return false;

        for (int i = 0; i <= s2.size() - n; i++) {
            if (isPermutation(s1, s2.substr(i, n)))
                return true;
        }
        return false;
    }
};