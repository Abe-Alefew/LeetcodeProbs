class Solution {
public:
    bool canAliceWin(int n) {
        int count = 10;
        while(n>=0){
            n-=count;
            count--;
        }
        return count%2 == 0;
    }
};