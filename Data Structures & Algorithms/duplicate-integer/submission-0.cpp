class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int num : nums){
            mp[num]++;
        }

        int maxNum = 0;

        for(const auto& [key, val] : mp){
            maxNum = max(maxNum, val);
        }

        return maxNum > 1;
    }
};