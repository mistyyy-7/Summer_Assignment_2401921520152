class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int currsum = 0;

        for(int i = 0; i < k; i++){
        currsum += nums[i];
        }
        int maxsum = currsum;
        for(int i=k; i<nums.size();i++){
            currsum = currsum -nums[i-k]+nums[i];
             maxsum=max(maxsum,currsum);
        }
        double avg=(double)maxsum/k;
        return avg;
    }
};