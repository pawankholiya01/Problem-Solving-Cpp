public:
    int w[100000];
    int ways(int n)
    {
        if(n==1||n==2)
            return n;
        
        int temp;
       
        if(w[n-1]!=-1)
            temp=w[n-1];
        else
        {
                w[n-1]=ways(n-1);
                temp=w[n-1];
        }
            
        if(w[n-2]!=-1)
            temp+=w[n-2];
        else
        {
                w[n-2]=ways(n-2);
                temp+=w[n-2];
        }
           
        return temp ;
        
    }
    int climbStairs(int n) 
    {
        for(int i=0;i<10000;i++)
            w[i]=-1;
        
        int count;
        count=ways(n);
        
        return count ;
            
        
    }
