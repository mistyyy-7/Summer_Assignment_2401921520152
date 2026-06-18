class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq; // helps to push pop from back front both
        vector<int>ans;  // stores ans
        int n=nums.size();
        // first sliding windw
        for(int i=0;i<k;i++){
            while(!dq.empty()  && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }

        // sliding further wndws

        for(int i=k;i<n;i++){
            // stores ans or max ele of deque as ans 
            ans.push_back(nums[dq.front()]);
            // deque should only stores curr wndw elemnt remove prvs
            while(!dq.empty() && dq.front()<=i-k){
                dq.pop_front(); // starting s ele nikalo 
            }
            //windw traversing
            while(!dq.empty()  && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        return ans;
    }
};