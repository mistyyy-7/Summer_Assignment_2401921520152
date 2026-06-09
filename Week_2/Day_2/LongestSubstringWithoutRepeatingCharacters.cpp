class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        for(int i=0;i<256;i++){
            mp[i]=-1;
        }
        int left=0;
        int right=0;
        int len;
        int maxlen=0;
        while(right<s.size()){
                if(mp[s[right]]!=-1){ // element already in substring
                    left=max(mp[s[right]]+1,left); // update left ptr
                }
            len=right-left+1;
            maxlen=max(len,maxlen);
            mp[s[right]]=right; //stores index 
            right ++;
        }
        return maxlen;
    }
};