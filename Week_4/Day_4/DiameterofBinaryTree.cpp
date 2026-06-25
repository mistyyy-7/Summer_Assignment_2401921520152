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
    int height(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        int lefth=height(root->left);
        int righth=height(root->right);

        return max(lefth,righth)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int leftie=diameterOfBinaryTree(root->left);
        int rightie=diameterOfBinaryTree(root->right);

        int currdia = height(root->left)+height(root->right);
        
        return max(currdia,max(leftie,rightie));
    }
};