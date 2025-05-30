class Solution {
public:
    bool judgeSquareSum(int c) {
        //using fermat theorem
        
         for(int i=2; i*i <= c; i++){
            if(c% i == 0){
               int count = 0;
               while(c %i ==0){
                    count++;
                    c /= i;
               }
                if(i % 4 == 3 && count%2 != 0){
            return false;
         }
            }
         }
         return c% 4 != 3;
    }
};