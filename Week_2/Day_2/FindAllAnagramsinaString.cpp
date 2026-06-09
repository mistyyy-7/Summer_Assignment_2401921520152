class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>pfreq(26,0);
        vector<int>sfreq(26,0);
        vector<int>ans;
        int n=s.size();
        int m=p.size();
        if(m>n){
            return ans;
        }

        for(char ch: p){
            pfreq[ch-'a']++;
        }

        // first window of size of p
        for(int i=0;i<m;i++){
            sfreq[s[i]-'a']++;
        }
         // now check the first window with p
         if (sfreq==pfreq){
            ans.push_back(0);
         }

         // now slide the window
         for(int i=0;i<n-m;i++){
            sfreq[s[i]-'a']--; // remove element of starting
            sfreq[s[i+m]-'a']++; // add element in end
            // now check again
            if(pfreq==sfreq){
                ans.push_back(i+1);
            }
         }
        return ans;
    }
};