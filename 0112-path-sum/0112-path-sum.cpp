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
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
            
            if(!root) return false; //base case 1 
            TreeNode* left = root->left;
            TreeNode* right = root->right;
            if(!left && !right) return targetSum == root->val;// base case 2 - leaf node case
            else{
                int rem = targetSum - root->val;
                return hasPathSum(left,rem) || hasPathSum(right,rem);
            }

    }
};