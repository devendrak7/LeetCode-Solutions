class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return search(nums,0,nums.size()-1,target);
    }
    int search(vector<int>& nums,int low,int high,int target){
        if (low>high) return low;
            int mid = low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if (nums[mid]<target){
                return search(nums,mid+1,high,target);
            }
            else{
                return search(nums,low,mid-1,target);
            }
        }
};