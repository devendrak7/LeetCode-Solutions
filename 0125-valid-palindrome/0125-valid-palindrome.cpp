class Solution {
public:
    bool isPalindrome(string s) {
        // string newS;
        
        // for(char ch : s){
        //     if(isalnum(ch)){
        //         ch = tolower(ch);
        //         newS+=ch;
        //     }
        // }
        // int n = newS.size();
        // for(int i = 0;i<n/2;i++){
        //     if(newS[i]!=newS[n-1-i]){
        //         return false;
        //     }

        // }
        int left = 0;
        int right = s.size()-1;
        while(left<right){
            while(left<right&&!isalnum(s[left])){
                left++;
            }
            while(left<right&&!isalnum(s[right])){
                right--;
            }
            if(tolower(s[left])!=tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true ;
        }
};