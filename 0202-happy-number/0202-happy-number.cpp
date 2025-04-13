class Solution {

    int calculateSquare(int n){
        int sum = 0;
        while(n > 0){
            int dig = n% 10;
            sum += dig * dig;
            n = n/10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
       // defining a set to check if there is a cycle
       unordered_set<int> checker;

       while(checker.find(n) == checker.end()){
            checker.insert(n);
            n = calculateSquare(n);
            if( n== 1){
                return true;
            }
       }

       return false;
    }
};