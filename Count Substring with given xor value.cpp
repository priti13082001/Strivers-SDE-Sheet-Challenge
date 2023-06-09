#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
   
   int xorvalue=0;
   int count=0;
   unordered_map<int,int>mp;
   for(int i=0;i<arr.size();i++)
   {
       xorvalue^=arr[i];
       if(xorvalue==x)
       {
           count++;
       }
       if(mp.find(xorvalue^x)!=mp.end())
       {
           count+=mp[xorvalue^x];
       }
       mp[xorvalue]++;
   }
   return count;
}