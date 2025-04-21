class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        //choosing the maximum element first
        int i = 1;
        int max = nums[0];
        while(i < nums.size()){
            if(nums[i] > max){
                max = nums[i];
            }
            i++;
        }

        int j = 1;
        int sum = max;
        while(j < k){
            max++;
            sum += max;
            j++;
        }
        return sum;
    }
};