class Solution {
public:
    void helper(int n,int oc,int cc, vector <string>&v,string s){
        if(oc==cc && cc==n){
            v.push_back(s);
        }
        //opening
        if(oc<n){
            helper(n,oc+1,cc,v,s+"(");
        }

        // closing
        if(cc<oc){
            helper(n,oc,cc+1,v,s+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string >v;
        int oc=0; // open count
        int cc=0; // close count

        helper(n,oc,cc,v,"");
        return v;
    }
};