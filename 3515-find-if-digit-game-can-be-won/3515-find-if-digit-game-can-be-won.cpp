class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sumF = 0;//sum of first digit
        int sumS = 0;// sum of second digit
        for(int i=0; i< nums.size(); i++){
            if(nums[i]%10 == nums[i]){//mean that they are single digit
            sumF+= nums[i];
                }else{
                    sumS += nums[i];
                }
        }

        return !(sumF == sumS);
    }
};