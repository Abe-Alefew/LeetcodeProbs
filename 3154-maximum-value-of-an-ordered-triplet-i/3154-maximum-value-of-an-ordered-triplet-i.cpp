class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long  output = 0;
        int n = nums.size();
        if(n < 3) return 0;

        vector<int> left(n,0);
        vector<int> right(n,0);
        left[0] = nums[0];
        for(int i = 1; i < n; i++){
            left[i] = max(left[i-1], nums[i]);
        
        }
        right[n-1] = nums[n-1];
        for(int i = n-2; i >= 0; i--){
            right[i] = max(right[i+1], nums[i]);
        }
        for(int i = 1; i < n-1; i++){
            int leftElem = left[i-1];
            int rightElem = right[i+1];
            long long val = 1LL * (leftElem - nums[i]) * rightElem;
            output = max(output, val);
        }
        return output;
    }
};