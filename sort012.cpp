#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int h=n-1;
   int l=0,mid=0;
   while(mid<=h)
   {
      switch(arr[mid])
      {
         case 0:
          swap(arr[mid],arr[l]);
          mid++;
          l++;
          break;
         case 1:
         mid++;
         break;
         case 2:
         swap(arr[mid],arr[h]);
         h--;
         break;


      }
   }
}