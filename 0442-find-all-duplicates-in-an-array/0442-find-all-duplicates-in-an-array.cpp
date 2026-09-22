class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n= nums.size();
        int current;
        vector<int>dupl;
        int index;
        for(int i = 0; i<n;i++){
            current = nums[i];
            if (current<0){
                current = -current;
            }
            index = current -1;
            
            if(nums[index]<0){
                dupl.push_back(current);
                
            }
            else{
            nums[index]=-nums[index];
            }
        }
        // vector<int>freq(n+1);
        // vector<int>dupl;
        // for(int i = 0; i<n;i++){
        //     freq[nums[i]]++;
        // }
        // for(int i = 1;i<=n;i++){
        //     if (freq[i]>1){
        //         dupl.push_back(i);
        //     }
        // }
        // return dupl;
    return dupl;
    }
};