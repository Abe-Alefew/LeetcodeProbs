class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //edge case
        int minL = strs[0].length();

        for(string s: strs){
            if (s.length() < minL){
                minL = s.length();
            }
        }
        int i = 0;
        while(i < minL){
            for (string s: strs){
                if (s[i] != strs[0][i]){
                    return  strs[0].substr(0,i);
                }
            }
            
            
            i++;
        }
        return  strs[0].substr(0,i);
    }   
};