class Solution {
    bool solve(string &s,int i,int j){
        if(i>=j){
            return true; //string check ho gyi h
        }
        if(s[i]==s[j]){
            return solve(s,i+1,j-1); //check further
        }
         return false;
    }
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int sp=0;
        int maxlen=0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                 
                 if(solve(s,i,j)==true && maxlen<(j-i+1)){
                    maxlen=j-i+1;
                    sp=i;
                 }

            }
        }
        string ans=s.substr(sp,maxlen);
        return ans;
    }
};