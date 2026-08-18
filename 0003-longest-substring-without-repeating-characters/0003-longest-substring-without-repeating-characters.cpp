class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0;
        int count =0;
        int freq[256]={0};
        int ans=0;
        for(int right =0;right<s.size();right++){
            freq[s[right]]++;
            count++;
            while(freq[s[right]]>1){
                freq[s[left]]--;
            left++;
            count--;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};