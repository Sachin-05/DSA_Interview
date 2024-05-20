class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //So the brute force logic shall be to calc. all the min value first
        // the below solution is not that much great as it is dealing with the TC of O(N^2)
        int res=0;
        int n = prices.size();

        for(int i=0; i<n-1; ++i){
            for(int j=i+1; j<n; ++j){
                res = max(res, prices[j]-prices[i]);
            }
        }
        return res;
    }
};


// the solution is now intended to be on the optimization

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // //So the brute force logic shall be to calc. all the min value first
        // int res=0;
        // int n = prices.size();

        // for(int i=0; i<n-1; ++i){
        //     for(int j=i+1; j<n; ++j){
        //         res = max(res, prices[j]-prices[i]);
        //     }
        // }
        // return res;

        //Let's optimize this by passing it to the pass
        // the below solution's TC is now O(N) i.e. through linear search
        int profit = 0;
        int mini = INT_MAX;
        int n = prices.size();
        for(int i=0; i<n; ++i){
            mini = min(mini, prices[i]);
            profit = max(profit, prices[i]-mini);
        }
        return profit;
    }
};
