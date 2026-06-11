class Solution {
public:
    string decodeString(string s) {
        stack<int>nums;
        stack<string>letter;

        //stores current num and string
        int num=0;
        string curr="";
        int n=s.size();

        for(char ch:s){
                if(ch-'0' >=0 && ch-'0'<=9){
                    num=num*10+(ch-'0');
                }
                 if (ch>='a' && ch<='z'){
                    curr=curr+ch;
                }
                 if (ch=='['){
                    nums.push(num);
                    letter.push(curr);
                    num=0;
                    curr="";
                }
                if (ch==']'){
                    int rep=nums.top();
                    nums.pop();
                    string temp=curr;
                    // repetition
                    for(int i=1;i<rep;i++){
                        curr=curr+temp;
                    }
                    if(!letter.empty()){
                        curr=letter.top()+curr;
                        letter.pop();
                    }
                }
        }

        return curr;
    }
};