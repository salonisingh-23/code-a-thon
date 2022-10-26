class Solution {
public:
    int n;
    int target;
    map<pair<int,int>,int> dp;
    int helper(vector<int>&nums,int sum,int i)
    {
        if(i==n)
        {
            if(sum==target)
                return 1;
            else
                return 0;
        }
        if(dp.find({sum,i})!=dp.end())
            return dp[{sum,i}];
        int takePlus=helper(nums,sum+nums[i],i+1);
        int takeNeg=helper(nums,sum-nums[i],i+1);
        return dp[{sum,i}]=takePlus+takeNeg;
    }
    int findTargetSumWays(vector<int>& nums, int t) {
        n=nums.size();
        target=t;
       return helper(nums,0,0);
    }
};