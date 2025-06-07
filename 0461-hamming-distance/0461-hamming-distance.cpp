class Solution {
public:
    int hammingDistance(int x, int y) {
        int dis = 0;
        while(x || y){
           if(x % 2 != y % 2) dis++;
           x /= 2;
           y /= 2;
        }
        return dis;
    }
};