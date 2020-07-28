    int coinChange(vector<int>& coins, int amount) 
    {
        vector<int> dp(amount+1,1000000);
        dp[0]=0;
        int n= coins.size(),i,j,k;
        for(i=1;i<=amount;i++)
        {
            for(j =0;j<n;j++)
            {
                if(i-coins[j]>=0)
                {
                    //if(dp[i-coins[j]]!=-1)
                        dp[i] = min(dp[i],dp[i-coins[j]]+1);
                }
            }
        }
        if(dp[amount]==1000000)
            return -1;
        return dp[amount];
    }