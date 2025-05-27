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

    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result;
        result.push_back(words[0]); 

        for (int i = 1; i < words.size(); ++i) {
            if (!isAnagram(words[i], result.back())) {
                result.push_back(words[i]);
            }
        }

        return result;
    }
};
