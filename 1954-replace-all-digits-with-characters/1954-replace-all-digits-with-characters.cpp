class Solution {
public:
    char shift(char c, int x){
        return  c + x;
    }
    string replaceDigits(string s) {
            
            for(int i= 0; i< s.length(); i++){
                if(isdigit(s[i])){
                    s[i] = shift(s[i-1],s[i]-'0');
                }
            }
            
            return s;
    }
};