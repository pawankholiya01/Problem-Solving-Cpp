    int numTrees(int n) 
    {
        long tr[10000],i,j,k;
        tr[1] = 1;
        tr[2] = 2;
        for(i=3;i<=n;i++)
        {
            tr[i] =2* tr[i-1] ;
            for(j=1;j<i-1;j++)
            {
                tr[i] += tr[i-1-j]*tr[j];
                
            }
            
        }
        return tr[n];
        
    }