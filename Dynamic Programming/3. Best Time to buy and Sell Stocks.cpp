    int maxProfit(vector<int>& prices) 
    {
        if(prices.size()==0)
            return 0;
        vector<int> profi;
        profi.resize(prices.size());
        int min = prices[0],n=prices.size(),i,max;
        
        for(i=0;i<n;i++)
        {
            profi[i] = 0;
        }
        
        
        for(i=1;i<n;i++)
        {
            if(prices[i]-min>0)
               profi[i]= prices[i]-min;
            
            if(prices[i]<min)
                min=prices[i];
                
        }
        
        max=profi[0];
        for(i=1;i<n;i++)
        {           
            if(profi[i]>max)
                max=profi[i];       
        }
        
        return max;
        
    }