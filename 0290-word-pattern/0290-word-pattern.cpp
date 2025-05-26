
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> map;
        unordered_map<string,char> map2;
        vector<string> st;
        istringstream ss(s);
        string w;
        while( ss >> w) {
            st.push_back(w);
        }
        if(pattern.length()!= st.size()) return false;
        for(int i = 0; i < pattern.length(); i++){
            if(map[pattern[i]] != "" && map[pattern[i]] != st[i]) return false;
            if(map2[st[i]] != '\0' && map2[st[i]]!= pattern[i]) return false;
            map[pattern[i]] = st[i];
            map2[st[i]] = pattern[i];
        }

        return true;
    }
};