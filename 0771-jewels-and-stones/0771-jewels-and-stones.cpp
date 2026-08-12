class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count =0;
        bool present[128] ={};
        for(char ch : jewels){
            present[ch]=true;
        }
        for(char ch : stones){            
                if(present[ch]){
                    count++;
                }          
        }
        return count;
    }
};