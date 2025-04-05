class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char, int> romInt = {{'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},{'D', 500},{'M', 1000}};

         int output = 0;
    for(int i=0; i< s.length();i++){
        if (romInt[s[i]] < romInt[s[i+1]]){
            output -= romInt[s[i]];
        }else{
            output+= romInt[s[i]];
        }
     
    }
    return output;  
    }
   
};