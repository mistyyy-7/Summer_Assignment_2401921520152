class Solution {
public:
    bool isAnagram(string s, string t) {
        int sn=s.size();
        int tn=t.size();
        // bahr initialize kro array last m bhi use hoga
        int freq[26]={0};// array m alphabet store karenge
        if(tn!=sn){
            return false;
        }
        else{
            
            for(int i=0;i<sn;i++){//same array liya h string s se alphabet ++ 
            //honge t se minus honge at last same count hoga =0 sare element
                freq[s[i]-'a']++;
                freq[t[i]-'a']--;
            }
            }


                    for(int i =0;i<26;i++){
                     if(freq[i]!=0){
                    return false;
                    }
        }
         return true;
}
};