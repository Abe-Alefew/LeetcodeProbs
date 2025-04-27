class Solution {
public:
    char shift(char c){
        char temp = c;
        return ++temp;
    }
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.size();
        vector<int> totalShifts(n, 0);

        // Calculate total shifts needed for each character (starting from the back)
        totalShifts[n-1] = shifts[n-1] % 26;
        for (int i = n-2; i >= 0; i--) {
            totalShifts[i] = (shifts[i] + totalShifts[i+1]) % 26;
        }

        // Shift each character
        for (int i = 0; i < n; i++) {
            s[i] = (s[i] - 'a' + totalShifts[i]) % 26 + 'a';
        }

        return s;
    }
};
