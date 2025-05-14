class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 10){
                sum += nums[i];
                
            }else if(nums[i] > 9 && nums[i] < 100){
                //finding max dig
                int maxDig = nums[i] / 10;
                if(nums[i]/ 10 < nums[i] % 10) maxDig = nums[i] % 10;
                sum += maxDig * 11;

            }else if((nums[i] > 99 && nums[i] < 1000)){
                int maxDig = max((nums[i]%100) /10 ,nums[i]/100);
                if(maxDig < nums[i] % 10 ) maxDig = nums[i] % 10;
                sum += maxDig * 111;
            }else{
                sum +=  1111;
            }
        }
        return sum;
    }
};