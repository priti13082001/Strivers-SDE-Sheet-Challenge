#include<bits/stdc++.h>
struct Activity{
    int st;
    int fin;
};

static bool Comp(const Activity&a,const Activity &b)
{
    return a.fin<b.fin;
}



int maximumActivities(vector<int> &start, vector<int> &finish) {
   
   int n=start.size();
    vector<Activity>item(n);
    
    for(int i=0;i<n;i++)
    {
        item[i].st=start[i];
        item[i].fin=finish[i];
    }
    sort(item.begin(),item.end(),Comp);
    int cnt=0;
    int prefinish=-1;
    for(int i=0;i<n;i++)
    {
     if(item[i].st>=prefinish)
     {
         cnt++;
         prefinish=item[i].fin;
     }
    }
    return cnt;
}