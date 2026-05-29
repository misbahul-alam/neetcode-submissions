class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string, int> symbol = {
        {"I", 1},
        {"V", 5},
        {"X", 10},
        {"L", 50},
        {"C", 100},
        {"D", 500},
        {"M", 1000},
        {"IV", 4},
        {"IX", 9},
        {"XL", 40},
        {"XC", 90},
        {"CD", 400},
        {"CM", 900}
    };

        int result = 0;
        int i = 0;

        while (i < s.length()) {
            if (i + 1 < s.length()) {
                string twoChar = s.substr(i, 2);

                if (symbol.count(twoChar)) {
                    result += symbol[twoChar];
                    i += 2;
                    continue;
                }
            }

            result += symbol[string(1, s[i])];
            i++;
        }

        return result;
    }
};