class Solution {
public:
    int minCost(vector<int>& cost, int n)
    {
        // Step-1 : creation od DP array;
        vector<int> dp(n+1);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i = 2; i<n; i++)
        {
            dp[i] = cost[i] + min(dp[i-1] , dp[i-2]);
        }
        return min(dp[n-1], dp[n-2]);
    }

     
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();   

        //STEP 1 - define a DP array of size (n+1) and initialized with -1
        // vector<int> dp(n+1, -1);       
        // int ans =  min(minCost(cost, n-1, dp), minCost(cost, n-2, dp));
        return minCost(cost, n);
    }
};