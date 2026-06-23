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
        queue<TreeNode*>q;
        vector<vector<int>> ans; //stores all ans
        vector<int> level; // stores one level

        if(root == NULL) return {}; // if tree is empty

        q.push(root);
        q.push(NULL);

        while(q.size()>0){
            TreeNode* curr=q.front();
            q.pop();

            if(curr==NULL){

                ans.push_back(level); // stores one level before moving to next
                level.clear();

                if(!q.empty()){
                    q.push(NULL);
                    continue;
                }
                else{
                    break;
                }
            }

            level.push_back(curr->val); //stores node val

            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
        return ans;
        
    }
};