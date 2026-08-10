class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int s = nums.size();
        vector<int> ans(s);
        for(int i = 0 ; i<s/2; i++){
                ans[i*2] = nums[i];
                ans[2*i+1]=nums[i+n];
        }
    return ans;
    }
};