#include <bits/stdc++.h> 
void swap(string &s,int i,int j)
{
    char ch=s[i];
    s[i]=s[j];
    s[j]=ch;
}
void permute(string &s,int start,int end,vector<string>&ans)
{
    if(start==end)
    {
        ans.push_back(s);
        return;
    }
    else
    {
        for(int i=start;i<=end;i++)
        {
            swap(s,start,i);
            permute(s,start+1,end,ans);
            swap(s,start,i);
        }
    }
}
vector<string> findPermutations(string &s) {
   
   vector<string>ans;
   permute(s,0,s.size()-1,ans);
   return ans;
}