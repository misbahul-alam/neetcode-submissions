class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;

        for (string st : details) {
            int age = (st[11] - '0') * 10 + (st[12] - '0');
            if (age > 60)
                ans++;
        }

        return ans;
    }
};