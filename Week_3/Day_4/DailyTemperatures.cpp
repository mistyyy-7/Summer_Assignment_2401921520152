class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>s;
        
        int n=temperatures.size();
        vector<int>ans(n);

        for(int i=0;i<n;i++){
            while(!s.empty() && temperatures[s.top()]<temperatures[i]){
                int pop=s.top();
                s.pop();
                ans[pop]=i-pop;
            }
            s.push(i);
        }
        return ans;
    }
};