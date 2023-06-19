int calculateMinPatforms(int arr[], int dep[], int n) {
   
   sort(arr,arr+n);
    	sort(dep,dep+n);
    	int j=1; //arrival index
    	int i=0;//departure index
    	 int maxplat=1;
        int platinuse=1;
    	while(i<n && j<n)
    	{
    	    if(arr[j]<=dep[i])
    	    {
    	        platinuse++;
    	           j++;
    	        maxplat=max(maxplat,platinuse);
    	     
    	    }
    	    else
    	    {
    	        platinuse--;
    	        i++;
    	    }
    	}
    	return maxplat;
    	


}