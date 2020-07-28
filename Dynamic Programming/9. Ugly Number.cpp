    int nthUglyNumber(int n) 
    {
        int dp[n+1],i,n2,n3,n5,k;
        dp[0] = 1;
        n2 = 0;
        n3 = 0 ;
        n5 = 0;
        for(i=1;i<n;i++)
        {
            dp[i] = min(dp[n2]*2,min(dp[n3]*3,dp[n5]*5));
            if(dp[i]==dp[n2]*2)
                n2++;
            else
            if(dp[i]==dp[n3]*3)
                n3++;
            else
                n5++;
            cout<<dp[i]<<" ";
                if(dp[i]==dp[i-1])
                    i--;
        }
        return dp[n-1];
    }