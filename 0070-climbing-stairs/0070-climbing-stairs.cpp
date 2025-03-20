class Solution {
public:
    int climbStairs(int n) {
        if ( n<= 1)  return 1; 
        int step0 = 1;
        int step1 = 1;
        int steps;
        for (int i=2; i<=n; i++){
            steps = step0 + step1;
            step0 = step1;
            step1= steps;
        }

        return steps;
    }
};