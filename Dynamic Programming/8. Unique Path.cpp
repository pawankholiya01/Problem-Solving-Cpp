    long paths[200][200]={-1};
    int path(int m,int n, int i,int j)
    {
      //  cout<<i<<" "<<j<<endl;;
        if(i==n-1||j==m-1)
        {
          //  paths++;
            return 1;
        }
        int x,y;
        if(paths[i+1][j]==-1)
            paths[i+1][j] = path(m,n,i+1,j);
        else
            x=paths[i+1][j];
        
        if(paths[i][j+1]==-1)
            paths[i][j+1]= path(m,n,i,j+1);
        else
            y=paths[i][j+1];
        paths[i][j]=x+y;
        
         cout<<i<<" "<<j<<" "<<paths[i][j]<<endl;;
        return x+y;
        
    }
    int uniquePaths(int m, int n) 
    {
        for(int i=0;i<100;i++)
        {
            for(int j=0;j<100;j++)
                paths[i][j]=-1;
        }
       int y= path(m,n,0,0);
        return y;
    }