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
    void dfs(TreeNode* root, vector<int>& res){
        if(!root) return;
        res.push_back(root->val);
        dfs(root->left, res);
        dfs(root->right, res);
    }
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> result;
        dfs(root, result);
        return result;
        // vector<int> output;
        // if(!root) return output;
        // stack<TreeNode*> s;
        // s.push(root);
        // while(!s.empty()){
        //     TreeNode* temp = s.top();
        //     s.pop();
        //     output.push_back(temp->val);
        //     if(temp->right) s.push(temp->right);
        //     if(temp->left) s.push(temp->left);
        // }
        // return output;
    }
};