class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low; i <= high; i++){
            string conv  = to_string(i);
            int n = conv.length();
            if( n%2 == 0){
                string fHalf = conv.substr(0,n/2);
                string sHalf = conv.substr(n/2);
                int sumF = 0;
                int sumS = 0;
                for(char c:fHalf){
                    sumF += c - '0';
                }
                for(char c:sHalf){
                    sumS += c - '0';
                }

                if(sumF == sumS) count++;
            }
             
        }
        return count;
    }
};