class Solution {
public:
    void backtrack(vector<string>& output, string &dig, unordered_map<char,string> &map, string& str,int i){
        if(dig.length() == str.length()){
            output.push_back(str);
        }

        for(char c: map[dig[i]]){
            str += c;
            backtrack(output, dig, map, str, i+1);
            str.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> map = {{'1',""}, {'2',"abc"}, {'3',"def"},{'4',"ghi"}, {'5',"jkl"}, {'6',"mno"}, {'7',"pqrs"}, {'8',"tuv"}, {'9',"wxyz"}};

        vector<string> output;
        string str;
        if(digits.length()!= 0) backtrack(output,digits,map,str,0);
        return output;


    }   


};