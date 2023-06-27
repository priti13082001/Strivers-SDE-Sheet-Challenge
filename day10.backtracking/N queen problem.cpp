#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool issafe(int row,int col,vector<string>&board,int n)
    {
        //for row
        int x=row;
        int y=col;
        
        // check for same row
        while(y>=0)
        {
            if(board[x][y]=='Q')
            {
                return false;
            }
            y--;
        }
        
        x=row;
        y=col;
        
        // check for upper diagonaal
        while(x>=0 && y>=0)
        {
            if(board[x][y]=='Q')
            {
                return false;
            }
            x--;
            y--;
        }
        
        x=row;
        y=col;
        
        // check for lower diagonaal
        while(x<n && y>=0)
        {
            if(board[x][y]=='Q')
            {
                return false;
            }
            x++;
            y--;
        }
        
        return true;
    }

    void solve(int col,vector<vector<string>>&ans,vector<string>&board,int n)
    {
        if(col==n)
        {
          ans.push_back(board);
            return;
        }
            
        for(int i=0;i<n;i++)
        {
            if(issafe(i,col,board,n))
            {
                board[i][col]='Q';
                solve(col+1,ans,board,n);
                board[i][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n,  string (n,'.'));
      
        // for(int i=0;i<n;i++)
        // {
        //     board[i]=s;
        // }
        solve(0,ans,board,n);
        
        
        return ans;
        
        
        
        
    }
};