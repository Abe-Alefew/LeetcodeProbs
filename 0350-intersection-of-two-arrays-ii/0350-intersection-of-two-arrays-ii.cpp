class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;

        for(int num:nums1){
            map1[num]++;
        }
        for(int num:nums2){
            map2[num]++;
        }

        vector<int> output;
        for(int num:nums1){
            if(find(output.begin(), output.end(), num)!= output.end()) continue;
            if(map1.count(num) && map2.count(num)){
                int least = min(map1[num], map2[num]);
                for(int i= 0; i< least; i++){
                    output.push_back(num);
                }
            } 
        }

        return output;
    }
};