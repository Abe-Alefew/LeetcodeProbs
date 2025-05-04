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
    void dfs(TreeNode* root, string path, vector<string>& ans){
        if(!root) return;
        if(path.length()!= 0){
            path += "->";
        }
        path+= to_string(root->val);

        //leaf node case
        if(!root->left && !root->right){
            ans.push_back(path);
            return;
        }
        //recursive case
        if(root->left)  dfs(root->left,path,ans);
        if(root->right)  dfs(root->right,path,ans);
    };

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        string path;
        dfs(root,path,res);
        return res;
    }

};