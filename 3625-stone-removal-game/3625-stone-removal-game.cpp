class Solution {
public:
    bool canAliceWin(int n) {
        int count = 10;
        while(n>=0){
            n-=count;
            count--;
        }
        if(count%2 == 0){
            return true;
        }
        return false;
    }
};