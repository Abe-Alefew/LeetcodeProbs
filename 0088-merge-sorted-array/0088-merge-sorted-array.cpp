class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        // using pointers
        int x = m-1;
        int y = n-1;
        int z = m+n -1 ;
        for(int i = z; i >= 0; i--){
            if (x<0){
                nums1[i] = nums2[y];
                y--;
            }
            else if (y<0){
                break;
            }
            else if( nums1[x] > nums2[y]){
                nums1[i] = nums1[x];
                x--;
            }
            else{
                nums1[i] = nums2[y];
                y--;
            }

        }
        
        
    }
};