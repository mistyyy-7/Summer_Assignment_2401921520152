class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs[0].size();i++){// i loop accross word flower
            for(int j=0;j<strs.size()-1;j++){
                //j loop sare words ki element ko check krega comapre
                if(strs[j][i]!=strs[j+1][i]){// jb element change ho return ans
                    return ans;
                }
            }
            //j loop k baad ans add honge sabme check add once
              ans=ans+strs[0][i];// ans m prefix add krte rho 
        }
        return ans;
    }
};