


int maxSubArray(vector<int>& nums) 
    {
        int maxcur=nums[0],max=nums[0],i,j;
        for(i=1;i<nums.size();i++)
        {
            if(maxcur<0)
                maxcur = 0;
            maxcur+=nums[i];
            
            
            if(maxcur>max)
                max = maxcur;
        }
        return max;
    }