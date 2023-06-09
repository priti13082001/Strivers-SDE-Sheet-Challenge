#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
   if(arr.empty())
     return 0;
    sort(arr.begin(),arr.end());
    int currentstreak=1;
    int maxstreak=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1]+1)
        {
            currentstreak+=1;
        }
        else if(arr[i]!=arr[i-1])
        {
          maxstreak=max(currentstreak,maxstreak);
          currentstreak=1;
        }

    } 
    maxstreak=max(currentstreak,maxstreak);
    return maxstreak;
}