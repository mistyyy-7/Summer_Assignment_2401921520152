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
    bool mirrorcheck(TreeNode* left,TreeNode* right){

        if(left==NULL && right==NULL){ //both are null
            return true;
        }
        if(left == NULL || right == NULL){ // one is null
            return false;
        }
        if(left->val != right->val){ // value mismatch
            return false;
        }
        return mirrorcheck(left->left,right->right) && mirrorcheck(left->right,right->left); // mirror recurssion
    }
    bool isSymmetric(TreeNode* root) {
        return mirrorcheck(root->left,root->right);
    }
};