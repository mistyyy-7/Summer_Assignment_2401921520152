class Solution {
public:
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    // Final answer
    vector<vector<int>> ans;

    // Empty tree case
    if(root == NULL){
        return ans;
    }

    // Queue for BFS
    queue<TreeNode*> q;
    q.push(root);

    // Direction flag
    bool leftToRight = true;

    while(!q.empty()){

        // Number of nodes in current level
        int size = q.size();

        // Stores one complete level
        vector<int> level;

        // Process exactly 'size' nodes
        for(int i=0; i<size; i++){

            TreeNode* curr = q.front();
            q.pop();

            level.push_back(curr->val);

            if(curr->left){
                q.push(curr->left);
            }

            if(curr->right){
                q.push(curr->right);
            }
        }

        // Reverse only when direction changes
        if(!leftToRight){
            reverse(level.begin(), level.end());
        }

        ans.push_back(level);

        // Toggle direction for next level
        leftToRight = !leftToRight;
    }

    return ans;
}
};
