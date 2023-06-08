#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	long ans=1;
	long xx=x;
	while(n)
	{
		if(n%2)
		{
			ans=((ans%m)*(xx%m))%m;
			n=n-1;

		}
		else
		{
			xx=(xx%m)*(xx%m);
			n=n/2;
		}
	}
	return int (ans%m);
}