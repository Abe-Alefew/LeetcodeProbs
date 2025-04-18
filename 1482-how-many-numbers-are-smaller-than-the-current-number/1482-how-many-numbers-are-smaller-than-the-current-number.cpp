class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       vector<int> output;
        for(int i=0; i< nums.size(); i++){
            int j=0;
            int count = 0;
            while(j< nums.size()){
                if(nums[j] < nums[i]){
                    count++;
                }
                j++;
            }
            output.push_back(count);

        }
        return output;

    }
};