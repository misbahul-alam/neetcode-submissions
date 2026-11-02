/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root, vector<int>& arr, int k) {
        if (root == nullptr)
            return;

        dfs(root->left, arr, k - 1);
        arr.push_back(root->val);
        dfs(root->right, arr, k - 1);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr;
        dfs(root, arr, k);

        return arr[k - 1];
    }
};