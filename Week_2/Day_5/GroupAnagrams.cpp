class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans; // stores ans
        unordered_map<string ,vector<string>> m;
        int n=strs.size();

        for(int i=0;i<n;i++){
            string temp=strs[i]; // stores one word

            // sort the word
            sort(temp.begin(),temp.end());

            // stores that in map
            m[temp].push_back(strs[i]);  //--> make grping of same words in map
        }

        for( auto words: m){
            ans.push_back(words.second); // stores in vector
        }
        return ans;
    }
};