class Solution {
public:
    int minCost(vector<int>& cost, int n, vector<int>& dp)
    {
        if(n<=1)
            return cost[n];
            
        //Step 3 
        if(dp[n] != -1)
            return dp[n];

        //Step 2 - memoization - storing values in dp array
        dp[n] = cost[n] + min(minCost(cost, n-1, dp), minCost(cost, n-2, dp));
        return dp[n];
    }

     
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();   

        //STEP 1 - initialize DP of size (n+1) and initialized with -1
        vector<int> dp(n+1, -1);       
        int ans =  min(minCost(cost, n-1, dp), minCost(cost, n-2, dp));
        return ans;
    }
};