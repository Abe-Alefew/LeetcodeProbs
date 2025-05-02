class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> miss;
        int i=0;
        int exp = 1;
        while(miss.size() < k){
            if(i < arr.size() && arr[i] == exp){
                i++;
            }else{
                miss.push_back(exp);
            }
            exp++;
        }

        return miss[k-1];
    }
};