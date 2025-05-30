class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        for(char c: s){
            if(!st.empty() && c==st.top().first){
                st.top().second++;
                if(st.top().second==k){
                    st.pop();
                }
            } else{
                st.push({c,1});
            }
        }
        string result="";
        while(!st.empty()){
            auto& pair=st.top();
            st.pop();
            result.append(pair.second,pair.first);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
