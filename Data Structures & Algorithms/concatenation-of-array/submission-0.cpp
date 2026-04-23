class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> arr = nums;
        arr.reserve(nums.size() * 2);

        for(int num : nums){
            arr.push_back(num);
        }
        return arr;
    }
};