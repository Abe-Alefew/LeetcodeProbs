class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map;
        unordered_map<char,int> map1;
        if(s.length() != t.length()) return false;
        for(char c:s){
            map[c]++;
        }
        for(char c:t){
            map1[c]++;
        }
        for(int i = 0; i< s.length(); i++){
            if(map[s[i]] != map1[s[i]]) return false;
        }
        return true;
    }
};