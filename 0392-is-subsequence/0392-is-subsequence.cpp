class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sizeS = s.length();
        int sizeT = t.length();

        if (s =="") return true;
        if (sizeS > sizeT){
            return false;
        }
        int i = 0;
        string res = "";
        for(int j = 0; j< sizeT; j++){
            if (i < sizeS && t[j] == s[i]){
                res += t[j];
                i++;
            }
        }

        if(res == s){
            return true;
        }else{
            return false;
        }

    }
};