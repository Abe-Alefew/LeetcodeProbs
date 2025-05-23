class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map_s;
        unordered_map<char,char> map_t;

        for(int i= 0; i < s.length(); i++){
            char cs = s[i];
            char ct = t[i];
            if(map_s.find(cs)!= map_s.end() && map_s[cs]!= ct) return false;
            if(map_t.find(ct) != map_t.end() && map_t[ct]!= cs) return false;

            map_s[cs] = ct;
            map_t[ct] = cs;
        }
    
        return true;

    }
};