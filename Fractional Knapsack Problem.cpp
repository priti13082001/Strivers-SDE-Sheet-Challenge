
#include<bits/stdc++.h>
struct Item{
    int weight;
    int value;
};
bool camp(const Item& a, const Item &b)
{
    double ratioA=(double)(a.value)/(double)(a.weight);
    double ratioB=(double)(b.value)/(double)(b.weight);
    return ratioA>ratioB;
}

double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
   
   vector<Item>newitem(n);
   for(int i=0;i<n;i++)
   {
       newitem[i].weight=items[i].first;
       newitem[i].value=items[i].second;
   }
   sort(newitem.begin(),newitem.end(),camp);
   double totalprofit=0;
   int currentweight=0;
   for(int i=0;i<n;i++)
   {
     if(currentweight+newitem[i].weight<=w)
     {
         currentweight+=newitem[i].weight;
         totalprofit+=newitem[i].value;
     }
     else
     {
         int remainingweight=w-currentweight;
         double fraction=(double)(remainingweight)/(newitem[i].weight);
         totalprofit+=fraction*(newitem[i].value);
         break;
     }
   }
   return totalprofit;

}