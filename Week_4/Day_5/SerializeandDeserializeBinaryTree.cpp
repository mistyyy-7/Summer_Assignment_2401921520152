/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string data="";
        if(root==NULL){
            return data=data+"null,";
            
        }
        data=data+to_string(root->val)+",";
        data=data+serialize(root->left);
        data=data+serialize(root->right);

        return data;
    }
    TreeNode* build(vector<string>& nodes, int &i){

    if(nodes[i] == "null"){
        i++;
        return NULL;
    }

    TreeNode* root = new TreeNode(stoi(nodes[i]));

    i++;

    root->left = build(nodes, i);

    root->right = build(nodes, i);

    return root;
}

    
    // Decodes your encoded data to tree.
 TreeNode* deserialize(string data) {

    vector<string> nodes;

    string temp="";

    for(char ch : data){

        if(ch == ','){
            nodes.push_back(temp);
            temp="";
        }
        else{
            temp += ch;
        }
    }

    int i = 0;

    return build(nodes, i);
}
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));