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
    TreeNode* helper(vector<int> &preorder , vector<int> &inorder , int st , int end , unordered_map<int , int> &m , int &i){
        if(st > end) return nullptr;
        TreeNode* newRoot = new TreeNode(preorder[i]);
        int mid = m[preorder[i]];
        i++;
        newRoot -> left = helper(preorder , inorder , st , mid - 1 , m , i);
        newRoot -> right = helper(preorder , inorder , mid + 1 , end , m, i);

        return newRoot;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> m;
        for(int i = 0 ; i < inorder.size() ; i++){
            m[inorder[i]] = i;
        }
        int i = 0;
        
        return helper(preorder , inorder , 0 , inorder.size()-1 , m , i);
    }
};