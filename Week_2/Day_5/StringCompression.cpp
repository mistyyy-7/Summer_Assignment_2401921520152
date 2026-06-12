class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int res=0;
        // i jo hoga char size se km hi hoga
        while(i<chars.size()){
        int grplen=1;// char ki len km se km 1 to hogi hi
        while(grplen+i<chars.size() && chars[grplen+i]==chars[i]){
            grplen++; // no of char count kr rha 
        }
        chars[res] = chars[i];
            res++;
        // grplen > 1 toh size likho
        if(grplen>1){
            string count=to_string(grplen);
            for ( char c:count){//Take each character of string one by one
            chars[res]=c;
            res++;
            }
        }
        i=i+grplen;//jump to the next grp

        }
        return res;
    }
};