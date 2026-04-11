/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    bool hasSum(TreeNode* root, int target, int sum) {
        if (root == nullptr)
            return false;
        sum += root->val;
        if (root->left == nullptr && root->right == nullptr)
            return sum == target;

        return hasSum(root->left, target, sum) ||
               hasSum(root->right, target, sum);
    }

public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr)
            return false;
        return hasSum(root, targetSum, 0);
    }
};