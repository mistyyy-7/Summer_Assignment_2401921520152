class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int>s;
        unordered_map<int,int>m; // stores nums2[i],uska NG
        for(int i=n-1;i>=0;i--){
            while(s.size()>0 && s.top()<=nums2[i]){
                s.pop();
            }
            if(s.empty()){
                m[nums2[i]]= -1;
            }
            else{
                m[nums2[i]]=s.top();
            }
            s.push(nums2[i]);
        }
        vector<int> ans; // stores actuall ans of nums1
        for(int i=0;i<nums1.size();i++){
            ans.push_back(m[nums1[i]]); // m m key ki value ans m add kro
        }
        return ans;
    }
};