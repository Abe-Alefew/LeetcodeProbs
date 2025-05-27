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

    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result;
        result.push_back(words[0]); // Always keep the first word

        for (int i = 1; i < words.size(); ++i) {
            if (!isAnagram(words[i], result.back())) {
                result.push_back(words[i]);
            }
        }

        return result;
    }
};
