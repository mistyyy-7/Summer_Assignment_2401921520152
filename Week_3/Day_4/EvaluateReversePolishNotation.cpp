class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;

        int ans=0;
        for(string ch:tokens){

            if(ch == "+" || ch == "-" || ch == "*" || ch == "/"){
                int b=s.top();
                s.pop();
                int a=s.top();
                s.pop();

                if(ch =="+"){
                     ans=a+b;
                }
                if(ch == "-"){
                     ans=a-b;
                }
                if(ch == "*"){
                     ans=a*b;
                }
                if(ch == "/"){
                     ans=a/b;
                }
                s.push(ans);
            }
            else{
                s.push(stoi(ch));
            }
        }
        return s.top();
    }
};