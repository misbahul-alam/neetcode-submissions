class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++) {
            int current = -1;
            bool found = false;
            for (int j = 0; j < nums2.size() - 1; j++) {
                if (nums1[i] == nums2[j]) {
                    found = true;
                }
                if (found && (nums1[i] < nums2[j + 1]) && current == -1) {
                    current = nums2[j + 1];
                }
            }
            result.push_back(current);
        }
        return result;
    }
};