#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	pair<int,int>res;
	
	vector<int>ans(2);
	unordered_map<int,int>mp;
	for(auto it:arr)
	{
		mp[it]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(mp.find(i)==mp.end())
		{
			res.first=i;
		}
		if(mp[i]>1)
		{
			res.second=i;
		}
	}
	
	return res;
}
