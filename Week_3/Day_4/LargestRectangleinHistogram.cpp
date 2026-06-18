class Solution {
    vector<int> right(vector<int>& heights){
        // find right boundry --> smaller element
        stack<int>s;
        int n=heights.size();
        vector<int>ans(n);
        for(int i=heights.size()-1;i>=0;i--){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(s.empty()){
            ans[i] = n;
        }
        else{
            ans[i] = s.top();
        }
            s.push(i);
        }
        // ans
        
        return ans;
    }

    vector<int> left(vector<int>& heights){
        // find left boundry --> smaller element
        stack<int>s;
        int n=heights.size();
        vector<int>ans(n);
        for(int i=0;i<heights.size();i++){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(s.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();
        }
            s.push(i);
        }
        // ans

        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int maxarea=0;
        vector<int>r = right(heights);
        vector<int>l = left(heights);
        for(int i=0;i<n;i++){

        int currarea=heights[i]*(r[i]-l[i]-1);
            maxarea=max(maxarea,currarea);
        }
        return maxarea;
    }
};