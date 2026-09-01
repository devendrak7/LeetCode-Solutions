class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        sort(expected.begin(),expected.end());
        int mismatches = 0;
        int n = heights.size();
        for (int i = 0; i<n;i++){
            if(expected[i]!=heights[i]){
                mismatches++;
            }
        }
    return mismatches;
    }
};