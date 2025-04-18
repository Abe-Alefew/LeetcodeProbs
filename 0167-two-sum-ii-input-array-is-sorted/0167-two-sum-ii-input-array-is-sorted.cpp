class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1 = 1;
        int index2 = numbers.size();
         vector<int> output;
        while(index1 < index2){
            int sum = numbers[index1 - 1] + numbers[index2 - 1];
            if( sum == target){
                output.push_back(index1);
                output.push_back(index2);
                break;
            } else if(sum > target){
                index2--;
            }else if(sum < target){
                index1++;
            }
        }
        return output;
    }
};