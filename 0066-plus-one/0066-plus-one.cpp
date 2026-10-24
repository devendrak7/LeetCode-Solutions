class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // int nums=0;
        // for(int i =0;i<digits.size();i++){
        //     nums= nums*10+digits[i];
        // }
        // nums+=1;
        // vector<int>addOne;
        // while(nums>0){
        //     addOne.push_back(nums%10);
        //     nums/=10;
        // }
        // reverse(addOne.begin(),addOne.end());
        // return addOne;
        if(digits[digits.size()-1]<9){
            digits[digits.size()-1]+=1;
            return digits;
        }
        for(int i =1;i<=digits.size();i++){

            if(digits[digits.size()-i]==9){
                digits[digits.size()-i]=0;
            }
            else{

                digits[digits.size()-i]+=1;
                break;
            }
        }
        if(digits[0]==0){
            digits.insert(digits.begin(),1);
        }
    return digits;
    }
};