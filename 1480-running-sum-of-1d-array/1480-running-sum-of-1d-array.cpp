class Solution {
public:

    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        vector<int> runningsum;
        for(int i = 0; i <n;i++)
        {
        sum += nums[i];
        runningsum.push_back(sum);
        }
        return runningsum;
    }
};