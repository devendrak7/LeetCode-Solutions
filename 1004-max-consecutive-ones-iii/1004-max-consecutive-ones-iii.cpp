class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int count=0;
        int zeros=0;
        int ans=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0){
                zeros++;
            }
            count++;
            while(zeros>k){
                if(nums[left]==0){
                    zeros--;
                }
                left++;
                count--;
                
            }
            ans = max(ans,count);
        }
        return ans;
    }
};