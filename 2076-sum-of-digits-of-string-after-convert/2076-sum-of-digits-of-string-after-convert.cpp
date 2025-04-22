class Solution {
public:
    
    int getLucky(string s, int k) {
        string newStr ="";
        for(char c:s){
            int num = c -'a' + 1;
            newStr += to_string(num);
        }
        
        while(k!=0){
            int sum = 0;
            for(char c:newStr){
                sum += c - '0';
            }
            newStr = to_string(sum);
            k--;
        }
        return stoi(newStr);
    }
};