class Solution {
public:
    void reverseString(vector<char>& s) {
        //  vector<char> p;
        //  int n = s.size();
        //  for (int i = n; i > 0; i--){
        //     for (int j = 0; j < n; j++){
        //         p[j] = s[i];
        //     }
        //  }
        //  return p;

        int i =0;
        int j= s.size() - 1;

        while(i<j){
            char elem = s[i];
            s[i] = s[j];
            s[j] = elem;
            i++;
            j--;

        }
         
    }


         
    
};