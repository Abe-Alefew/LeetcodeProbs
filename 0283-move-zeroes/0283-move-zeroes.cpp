class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int holder = 0;
         int seeker =  0;
         int n = nums.size();
         while(seeker < n){
            if(nums[seeker] == 0){
                seeker++;
            }else{
                int temp = nums[holder];
                nums[holder] = nums[seeker];
                nums[seeker] = temp;
                holder++;
                seeker++;
            }
         }
    }
};