class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i< n-1; i++){
            if(nums[i] == nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
           
        }
        int seeker = 0;
        int holder = 0;
        while(seeker < n){
            if(nums[seeker] == 0){
                seeker++;
            }else{
                int temp = nums[holder];
                nums[holder] = nums[seeker];
                nums[seeker] = temp;
                seeker++;
                holder++;
            }
        }
        return nums;
    }
};