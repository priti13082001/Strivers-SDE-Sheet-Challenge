
#include<bits/stdc++.h>
void solve(vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds,int target,int start)
{
	if(target==0)
	{
		ans.push_back(ds);
		return;
	}
	for(int i=start;i<arr.size() && arr[i]<=target;i++)
	{
		if(i>start && arr[i]==arr[i-1])
		{
			continue;
		}
		ds.push_back(arr[i]);
		solve(arr,ans,ds,target-arr[i],i+1);
		ds.pop_back();
	}
}





vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
	vector<vector<int>>ans;
	vector<int>ds;
	sort(arr.begin(),arr.end());
	solve(arr,ans,ds,target,0);
	return ans;
}
