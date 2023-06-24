#include <bits/stdc++.h>

void solve(set<vector<int>>&result,vector<int>&ds,vector<int>&arr,int start)
{
  result.insert(ds);
  for(int i=start;i<arr.size();i++)
  {
    ds.push_back(arr[i]);
    solve(result,ds,arr,i+1);
    ds.pop_back();
  }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
   
   vector<vector<int>>ans;
   vector<int>ds;
   set<vector<int>>result;
   sort(arr.begin(),arr.end());
   solve(result,ds,arr,0);
   for(auto it:result)
   {
       ans.push_back(it);
   }
   return ans;
}