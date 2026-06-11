class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<int> res;

        for (int num : nums) {
            map[num]++;
        }

        for (auto const& [key, val] : map) {
            if (val > 1) {
                res.push_back(key);
            }
            res.push_back(key);
        }
        sort(res.begin(), res.end());
        nums = res;
        return res.size();
    }
};