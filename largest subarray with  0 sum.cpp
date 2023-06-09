#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  
  int n=arr.size();
  unordered_map<int,int>mp;
  int maxlen=0;
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
    if(sum==0)
    {
      maxlen=i+1;
    }
    if(mp.find(sum)!=mp.end())
    {
      int previndex=mp[sum];
      maxlen=max(maxlen,i-previndex);
    }
    else
    {
      mp[sum]=i;
    }
  }
  return maxlen;

}
