class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string nw = "";
        string result ="";
        int count = 0;
         for (char ch : s) {
            if (ch != '-') {
                nw += toupper(ch);
            }
        }
        for(int i = nw.size() - 1 ; i >=0 ; i--){
            result += nw[i];
            count++;
            if(count == k &&  i != 0){
                result += '-';
                count =0;
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
