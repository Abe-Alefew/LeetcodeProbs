class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> stn;

        for(char c:stones){
            stn[c]++;
        }

        int output = 0;
        for(char c:jewels){
            output += stn[c];
        }

        return output;
    }
};