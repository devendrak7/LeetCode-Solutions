class Solution {
public:
    bool isPalindrome(string s) {
        string newS;
        
        for(char ch : s){
            if(isalnum(ch)){
                ch = tolower(ch);
                newS+=ch;
            }
        }
        int n = newS.size();
        for(int i = 0;i<n/2;i++){
            if(newS[i]!=newS[n-1-i]){
                return false;
            }

        }
        return true ;
        }
};