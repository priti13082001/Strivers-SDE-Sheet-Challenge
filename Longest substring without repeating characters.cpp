#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
   
   int maxlength=0;
   int start=0;
   unordered_set<char>mp;
   for(int i=0;i<input.size();i++)
   {
       char curr=input[i];
       while(mp.find(curr)!=mp.end())
       {
           mp.erase(input[start]);
           start++;
       }
       maxlength=max(maxlength,i-start+1);
       mp.insert(curr);
   }
   return maxlength;
}