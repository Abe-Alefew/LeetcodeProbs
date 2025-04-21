class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
            double win_sum = 0;
            for(int i= 0; i < k; i++){
                win_sum += nums[i];
            }
            double total_sum = win_sum;
            for(int i = k; i < nums.size();i++){
                win_sum += nums[i];
                win_sum -= nums[i-k];
                if(total_sum < win_sum){
                    total_sum = win_sum;
                }
            }
            return total_sum/k;
    }
};