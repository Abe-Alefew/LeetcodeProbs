class Solution {
public:
    string sortSentence(string s) {
         vector<string> a(s.size());
        string k,ans;
        int i=0;
        for(char c:s){
            if(c==' ') continue;
            if(isdigit(c)){
             i=c-'0';
             a[i-1]=k;
             k.clear();
            }
            else k.push_back(c);
        }
          for(string p:a){
            if(p.size()>0){
            ans+=p;
            ans.push_back(' ');
          }}
          ans.pop_back();
          return ans;
    }
};