class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long count = 0;
        // i shows the number of pens
        for(long i = 0; i* cost1 <= total; i++){
            long left = total - i * cost1;
            count+= (left/cost2) +1;
        }
        return count;
    }
};