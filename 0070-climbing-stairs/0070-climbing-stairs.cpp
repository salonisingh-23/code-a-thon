class Solution {
public:
    
    int countStairs(int n, vector<int>&dp)
    {
          if(n==0)
        {
            return 1; 
        }
        if(n<0)
            return 0;
        if(dp[n])
        {
            return dp[n];
        }
        return dp[n]=countStairs(n-1,dp)+countStairs(n-2,dp);
    }
    int climbStairs(int n)
    {
        vector<int>dp(n+1);
        return countStairs(n,dp);
    }
    
};