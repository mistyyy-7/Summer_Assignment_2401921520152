class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        int len=1;

        string sub="";
        while(len<n){
            if(n % len == 0){
            bool ok=true;
            sub=s.substr(0,len);
            for(int i=0;i<n;i=i+sub.size()){
                if(s.substr(i,sub.size())!=sub){
                    ok=false;
                    break;
                }
            }
            if(ok) return true ;
            }
            len++;
            }

        return false;
    }
};