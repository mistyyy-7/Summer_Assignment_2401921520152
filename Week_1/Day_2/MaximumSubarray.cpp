class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int carrsum=0;
        int maxsum=INT_MIN ;
        for(int i=0;i<nums.size();i++){
            carrsum=carrsum+nums[i];
            maxsum=max(carrsum,maxsum);
            if(carrsum<0){
                carrsum=0;
            }
        }
        return maxsum;
    }
};