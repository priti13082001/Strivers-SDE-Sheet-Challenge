#include <bits/stdc++.h>
struct Job{
    int dead;
    int profit;
};
bool Comp(const Job &j1 ,const Job &j2)
{
    return j1.profit>j2.profit;
}
int jobScheduling(vector<vector<int>> &jobs) {
    
 int n=jobs.size();
 vector<Job>newjob(n);
 for(int i=0;i<n;i++)
 {
     newjob[i].dead=jobs[i][0];
     newjob[i].profit=jobs[i][1];
 }
 sort(newjob.begin(),newjob.end(),Comp);
 int maxdeadline=0;
 for(int i=0;i<n;i++)
 {
     if(newjob[i].dead>maxdeadline)
     {
         maxdeadline=newjob[i].dead;
     }
     
 }
 int slots[maxdeadline];
 for(int i=0;i<maxdeadline;i++)
 {
     slots[i]=-1;
 }
 int maxprofit=0;
 for(int i=0;i<n;i++)
 {
     int deadline=newjob[i].dead;
     for(int j=deadline-1;j>=0;j--)
     {
         if(slots[j]==-1)
         {
             slots[j]=newjob[i].dead;
             maxprofit+=newjob[i].profit;
             break;
             
         }
     }
     
 }
 return maxprofit;
    
}
