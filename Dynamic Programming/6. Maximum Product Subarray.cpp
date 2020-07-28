    int maxProduct(vector<int>& nums) 
    {
        int n = nums.size();
        int i,j,k;
        int product =nums[0],minproduct = nums[0],maxproduct=nums[0];
        // product = *max(nums.begin(),nums.end());
        
        for(i=1;i<n;i++)
        {
            if(nums[i]<0)
                swap(minproduct,maxproduct);
            maxproduct = max(nums[i],maxproduct*nums[i]);
            minproduct = min(nums[i],minproduct*nums[i]);
            // cout<<maxproduct<<" "<<minproduct<<endl;
            product = max(product,max(minproduct,maxproduct));
            
        }
        
        return product;
        
    }