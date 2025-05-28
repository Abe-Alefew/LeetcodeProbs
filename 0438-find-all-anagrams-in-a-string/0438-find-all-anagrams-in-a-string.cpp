class Solution {
public:
 bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        vector<int> count(26, 0);
        for (int i = 0; i < s.length(); ++i) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; ++i) {
            if (count[i] != 0) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> output;
        int n = p.length();
        for(int i = 0; i < s.length(); i++){
            if(isAnagram(s.substr(i,n),p)) output.push_back(i);
        }
        return output;
    }
};