#include<bits/stdc++.h>
using namespace std;


int countdigits(int n)
{
	int cnt = 0;
	while(n>0)
	{
		cnt = cnt+1;
		n = n/10;
	}
	return cnt;
}

int main()
{
	int n;
	cout<<"Enter n:"<<" ";
	cin>>n;
	cout<<countdigits(n);
	return 0;
}
