class Solution {
public:
    double myPow(double x, int n) {
        long long a = n;
        if (a < 0) {
            x = 1 / x;
            a = abs(a);
        }

        if (a == 0) return 1;
        if (a == 1) return x;

        double part = myPow(x, a / 2);

        if (a % 2 == 0) {
            return part * part ;
        } else {
            return part * part * x;
        }
    }
};
