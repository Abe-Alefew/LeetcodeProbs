class Solution {
public:
    int hammingDistance(int x, int y) {
        int dis = 0;
        int xr = x ^ y;
        while( xr){
            xr &= xr - 1;
            dis++;

        }
        return dis;
    }
};