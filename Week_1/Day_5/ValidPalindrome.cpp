class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0; i < s.size(); i++){
    s[i] = tolower(s[i]);
    }
        int n=s.size();
        int st=0;
        int end=n-1;
        while(st<=end){
            if(!isalnum(s[st])) {
                st++;
                continue;
            }
            if(!isalnum(s[end])) {
                end--;
                continue;
            }
            if(s[st]!=s[end]){
                return false;
        }
        st++;
        end--;
        
    }
    return true;
    }

};