class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>freqransom(26,0);
        vector<int>freqmaga(26,0);

        for(char ch:ransomNote){
            freqransom[ch-'a']++;
        }    
        for(char ch:magazine){
            freqmaga[ch-'a']++;
        }    

        for(int i=0;i<26;i++){
            if(freqransom[i]>freqmaga[i]){
                return false;
            }
         }
            return true;        

        }
};