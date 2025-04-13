class Solution {
public:
    int lengthOfLastWord(string s) {
        int lengthWord = 0;
        bool val = false;
        for( int i= s.length() -1; i >= 0; i--){
            if( s[i] != ' '){
               val = true;
                lengthWord++;
            }else if (val){
                break;
            }

        }
        return lengthWord;
    }
};