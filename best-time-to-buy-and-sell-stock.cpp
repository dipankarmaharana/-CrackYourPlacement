class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0;
        int minsofar = prices[0];
        for (int i=0;i<prices.size();i++){
            minsofar = min(minsofar,prices[i]);
            int profit = prices[i]-minsofar;
            mp = max(mp,profit);
        }
        return mp;
    }
};
