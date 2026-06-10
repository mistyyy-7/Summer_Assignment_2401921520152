class Solution {
public:
    int strStr(string s1, string s2) {
        int m=s1.size();
        int n=s2.size();

        for(int i=0;i<= m-n;i++){
            for(int j=0;j<n;j++){
                if(s1[i+j]!=s2[j]){ // string not match , loop se bahr 
                    break;
                }
                if(j==n-1){ //string matched , end pr aa gya , index return kro 
                    return i; // hnaystack ka 
                }
            }
        }
        return -1;
    }
};