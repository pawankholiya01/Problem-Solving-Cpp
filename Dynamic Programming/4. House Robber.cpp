    int rob(vector<int>& nums) 
    {
        if(nums.size()==0)
            return 0;
         if(nums.size()==1)
            return nums[0];
        
        
        vector<int > profit,num;
        
        int n= nums.size(),i,mac; ;
        
        profit.resize(n);
         for(i=0;i<n;i++)
        {
            profit[i] = 0;
        }
        profit[0]=nums[0];
        profit[1]=max(nums[1] , profit[0]);
        for(i=2;i<n;i++)
        {
            
            profit[i]=max( profit[i-1],profit[i-2]+nums[i]  );
        }
        mac=profit[0];
        for(i=1;i<n;i++)
        {           
            if(profit[i]>mac)
                mac=profit[i];       
        }
        
        return mac;
        
    }