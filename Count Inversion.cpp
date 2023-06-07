#include <bits/stdc++.h> 

long long countandmerge(long long*arr,int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=arr[m+1+i];
    }
    long long res=0;
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j]) {
            arr[k]=left[i]; i++; k++;
        }
        else{
            arr[k]=right[j];j++;res+=(n1-i);
            k++;
        }
   }
    while(i<n1){
        arr[k]=left[i];
        k++;
        i++;
        
    }
    while(j<n2)
    {
        arr[k]=right[j];
        j++;
        k++;
   }
    return res;
}

long long countinv(long long* arr,int l,int r)
{
    long long res=0;
    if(l<r)
    {
        int m=l+(r-l)/2;
        res+=countinv(arr,l,m);
        res+=countinv(arr,m+1,r);
        res+=countandmerge(arr,l,m,r);
   }
    return res;
}
long long getInversions(long long *arr, int n){
    int l=0;
    int r=n-1;
    
    return countinv(arr,l,r);
}