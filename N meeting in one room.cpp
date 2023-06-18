#include <bits/stdc++.h>
struct Meeting{
    int start;
    int end;
    int pos;
};
static bool Comp(const Meeting &m1,const Meeting &m2)
{
   if (m1.end<m2.end)
     return true;
   else if(m1.end>m2.end)
    return false;
  else if(m1.pos<m2.pos)
   return true; 

   return false; 
} 

vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    int n=start.size();
    vector<Meeting>meeting(n);
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        meeting[i].start=start[i];
        meeting[i].end=end[i];
        meeting[i].pos=i+1;

    }
    sort(meeting.begin(),meeting.end(),Comp);
    int prevend=-1;
    
    for(int i=0;i<n;i++)
    {
        if(meeting[i].start>prevend)
        {
            ans.push_back(meeting[i].pos);
            prevend=meeting[i].end;
        }
    }
    return ans;
   
}