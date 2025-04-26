class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int index1 = 0;
        int longestL = 0;
        set<int> set1;
        int n = s.length();

        for(int r= 0; r < n; r++){
            while(set1.find(s[r])!= set1.end()){
                set1.erase(s[index1]);
                index1+=1;
            }

            int winSize = (r-index1) + 1;
            longestL = max(longestL,winSize);
            set1.insert(s[r]);
        }

        return longestL;

    }
};