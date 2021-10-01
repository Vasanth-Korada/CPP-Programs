int minPathSum(vector<vector<int>>& g) 
    {
        int r=g.size();
        int c=g[0].size();
        
        for(int i=1;i<r;i++)
        g[i][0]+=g[i-1][0];
        
        for(int i=1;i<c;i++)
        g[0][i]+=g[0][i-1];
        
        for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            g[i][j]+=min(g[i-1][j] ,g[i][j-1]);
        }
        
        return g[r-1][c-1];
	}
