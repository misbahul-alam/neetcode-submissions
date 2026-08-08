class Solution {
private:
    int sum(int n) {
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            n = (n - d) / 10;
            sum += (d * d);
        }

        return sum;
    }

public:
    bool isHappy(int n) {
        int num = n;
        unordered_set<int> seen;

        while (num > 1) {
            int newNum = sum(num);
            if (seen.count(newNum)) {
                return false;
            } else {
                seen.insert(newNum);
                num = newNum;
            }
        }

        return num == 1;
    }
};