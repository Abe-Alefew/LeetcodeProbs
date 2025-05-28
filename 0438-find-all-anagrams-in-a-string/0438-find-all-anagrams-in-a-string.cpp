class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.length() < p.length()) return {};

        array<int,26> freqP = {};
        array<int,26> win = {};

        for(int i = 0; i < p.length(); i++){
            freqP[p[i]-'a']++;
            win[s[i]-'a']++;
        }

        vector<int> output;
        if(freqP == win) output.push_back(0);

        for(int i = p.length(); i <s.length(); i++){
            win[s[i-p.length()]-'a']--;
            win[s[i]-'a']++;

            if(freqP == win) output.push_back(i- p.length()+1);
        }

        return output;
    }
};