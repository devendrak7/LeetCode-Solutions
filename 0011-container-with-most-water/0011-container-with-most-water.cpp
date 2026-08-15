class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int width;
        int area;
        int maxArea=0;
        int left = 0;
        int right = height.size()-1;
            while(left<right){
                width =right-left;
                area = width*min(height[left],height[right]);
                maxArea = max(maxArea,area);
                if(height[left]<height[right]){
                    left++;
                }
                else{
                    right--;
                }
                }
                return maxArea ;
            }
};