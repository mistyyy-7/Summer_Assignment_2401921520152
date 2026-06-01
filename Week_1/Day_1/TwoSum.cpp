class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        int n=nums.size();
        for(int st=0;st<n;st++){
            for(int end=st+1;end<n;end++){
                 int sum=nums[st]+nums[end];
                 if(sum==target){
                    return {st,end };
                 }
            }
        }
        return{};
    }
};