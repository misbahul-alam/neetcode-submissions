class Solution {
public:
    void allSets(vector<int>& nums, vector<vector<int>>& sets, vector<int>& ans, int i) {
        if (i == nums.size()) {
            sets.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        allSets(nums, sets, ans, i + 1);
        ans.pop_back();

        int idx = i + 1;
        while (idx < nums.size() && nums[idx] == nums[idx - 1])
            idx++;

        allSets(nums, sets, ans, idx);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> sets;
        vector<int> ans;

        allSets(nums, sets, ans, 0);

        return sets;
    }
};