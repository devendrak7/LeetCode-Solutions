class Solution {
public:
    string defangIPaddr(string address) {
        string newAddress;
        for(char ch : address){
            if(ch =='.'){
                newAddress +="[.]";
            }
            else{
                newAddress+=ch;
            }
        }
        return newAddress;
    }
};