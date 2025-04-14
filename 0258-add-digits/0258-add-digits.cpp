class Solution {
public:
    int addDigits(int num) {
      int out=0;
        while(num)
        {
            out+=(num%10);
            num/=10;
        }
        if(out<10)
            return out;
        else
            return addDigits(out);
    }
};