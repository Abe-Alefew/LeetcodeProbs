class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(2*n);
        
        for(int i= 0; i< n; i++){
            output[i] = nums[i];
        }
        for(int i= 0; i<n; i++){
            output[i+n] = nums[i];
        }
        return output;
            
    }
};