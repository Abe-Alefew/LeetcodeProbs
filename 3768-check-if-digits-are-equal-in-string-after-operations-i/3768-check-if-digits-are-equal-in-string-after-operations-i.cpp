class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.length() > 2) {
            string temp = "";
            for (int i = 0; i + 1 < s.length(); ++i) {
                int sum = (s[i] - '0') + (s[i + 1] - '0');
                temp += to_string(sum % 10);
            }
            s = temp;
        }
        return s.length() == 2 && s[0] == s[1];
    }
};