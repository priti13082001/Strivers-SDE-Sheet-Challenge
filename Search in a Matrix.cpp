bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n=mat.size();
    int m=mat[0].size();
    int row=0;
    int col=m-1;
    while(row<n && col>=0)
    {
        int curr=mat[row][col];
        if(curr==target)
        {
            return true;
        }
        else if(target<curr)
        {
            col--;
        }
        else{
            row++;
        }

    }
    return false;
        
}