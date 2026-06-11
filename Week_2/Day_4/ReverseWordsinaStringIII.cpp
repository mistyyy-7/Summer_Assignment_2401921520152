class Solution {
public:
    string reverseWords(string s) {
        string word="";
        int n=s.size();
        string ans="";

        for(int i=0; i<n ; i++){
            if(s[i]!=' ')
            word=word+s[i];
            else{
                reverse(word.begin(),word.end());
                ans=ans+word;
                ans=ans+" ";
                word="";
            }
        }
        // last word adding 
            reverse(word.begin(),word.end());
            ans=ans+word;
        return ans;
    }
};