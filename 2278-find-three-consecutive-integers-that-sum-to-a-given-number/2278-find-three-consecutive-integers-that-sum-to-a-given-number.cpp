class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> output;
        if(num % 3 == 0){
            long long x = num/3;
            output.push_back(x-1);
            output.push_back(x);
            output.push_back(x+1);
        }
        return output;
    }
};