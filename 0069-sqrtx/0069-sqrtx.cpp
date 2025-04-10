class Solution {
public:
    int mySqrt(int x) {
        if(x== 0) return 0;

        long long res = x;
        while (res*res > x){
            //Newton's formua
            res = (res+x / res)/2;
        }

        return res;
    }
};