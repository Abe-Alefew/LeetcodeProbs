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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> output;
        if(!root) return output;
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
                vector<int> add;
                int i = 0;
                int n = qu.size();
                while(i< n){
                    TreeNode* temp = qu.front();
                    qu.pop();
                    add.push_back(temp->val);
                    if(temp->left) qu.push(temp->left);
                    if(temp->right) qu.push(temp->right);
                    

                    i++;
                }
                output.push_back(add);
        }

        return output;

    }
};