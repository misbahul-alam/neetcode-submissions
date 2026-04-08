class Solution {
public:
    void addSets(vector<int>& nums, vector<vector<int>>& sets, vector<int>& ans,
                 int i) {
        if (i == nums.size()) {
            sets.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        addSets(nums, sets, ans, i + 1);

        ans.pop_back();
        addSets(nums, sets, ans, i + 1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sets;
        vector<int> ans;

        addSets(nums, sets, ans, 0);

        return sets;
    }
};