class Solution {
public:
    int smallestEvenMultiple(int n) {
        //basically it's calculatinga an LCM
        if (n%2 == 0) return n;
        return n*2;
        }
};