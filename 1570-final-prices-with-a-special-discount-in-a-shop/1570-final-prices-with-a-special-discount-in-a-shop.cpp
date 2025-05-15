class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> stk;
        int i = 0;
        while(i< prices.size()){
            while(!stk.empty()&& prices[stk.top()] >= prices[i]){
                prices[stk.top()] -= prices[i];
                stk.pop();

            }
            stk.push(i);


            i++;
        }

        return prices;


    }
};