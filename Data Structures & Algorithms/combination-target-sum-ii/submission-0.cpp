class Solution {
public:
    void combination(vector<vector<int>>& ans, vector<int>& candidates,
                     vector<int>& list, int target, int index) {
        if (target == 0) {
            ans.push_back(list);
            return;
        }

        for (int i = index; i < candidates.size(); i++) {
            if (i > index && candidates[i] == candidates[i - 1])
                continue;

            if (candidates[i] > target)
                break;

            list.push_back(candidates[i]);

            combination(ans, candidates, list, target - candidates[i], i + 1);

            list.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> list;

        combination(ans, candidates, list, target, 0);

        return ans;
    }
};