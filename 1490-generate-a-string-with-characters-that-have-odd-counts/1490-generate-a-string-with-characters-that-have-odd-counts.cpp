class Solution {
public:
    string generateTheString(int n) {
        
        if(n%2 != 0){
            
            return string(n,'a');
        }else{
            return string(n-1,'a') + string(1,'b');
        }
    }
};