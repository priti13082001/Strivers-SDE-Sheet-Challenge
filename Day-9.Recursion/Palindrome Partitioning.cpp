#include <bits/stdc++.h> 

bool isPalindrome(string &s,int start,int end)
{
    while(start<end)
    {
        if(s[start]!=s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
void solve(vector<vector<string>>&ans,vector<string>&ds,string &s,int start)
{
    if(start==s.size())
    {
        ans.push_back(ds);
        return;
    }
    for(int i=start;i<s.size();i++)
    {
        if(isPalindrome(s, start, i))
        {
            ds.push_back(s.substr(start,i-start+1));
            solve(ans,ds,s,i+1);
            ds.pop_back();
        }
    }
}
vector<vector<string>> partition(string &s) 
{
   vector<vector<string>>ans;
   vector<string>ds;
   solve(ans,ds,s,0);
   return ans;
}