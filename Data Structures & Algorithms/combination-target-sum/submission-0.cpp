class Solution {
public:
    void combination(vector<vector<int>>& ans, vector<int>& candidates,
                     vector<int>& list, int target, int index) {
        if (target == 0) {
            ans.push_back(list);
            return;
        }
        if (target < 0)
            return;

        for (int i = index; i < candidates.size(); i++) {
            list.push_back(candidates[i]);
            combination(ans, candidates, list, target - candidates[i], i);
            list.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> list;
        combination(ans, candidates, list, target, 0);
        return ans;
    }
};