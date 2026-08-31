class Solution {
public:
    bool isValid(string s) {
        int n= s.size();
        int top = -1;
        char stack[n];
        if (n%2!=0) return false;
        for (int i =0; i<n;i++){
            if(s[i] == '('){
                stack[++top]=')';
            }
            else if(s[i] == '['){
                stack[++top]=']';
            }
            else if(s[i] == '{'){
                stack[++top]='}';
            }
            else
            {
                if(top==-1)
                    return false;
                if(s[i]!=stack[top])
                    return false;
                else{
                    top--;
                }
                }
            }
            return top == -1;
        }
};