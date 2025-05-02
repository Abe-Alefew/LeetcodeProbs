class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> hash;
        int j = 0;
        for(char c:key){
            if(isalpha(c)){
                if(hash.contains(c)) continue;
                hash[c] = 'a' + j;
                j++;
            }
        }
        string res = "";
        for(char k:message){
            if(isalpha(k)){
                res += hash[k];
            }else{
                res += k;
            }
            
        }

        return res;
    }
};