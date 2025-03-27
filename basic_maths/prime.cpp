#include<bits/stdc++.h>
using namespace std;

 int IsPrime(int n)
{
	int cnt = 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			cnt = 1; //composite
		}
		
		
		else {
			cnt = 0; //prime
		}
	}
	
return cnt;
	
}


int main()
{
	int n;
	cout<<"Enter n:"<<" ";
	cin>>n;
	cout<<IsPrime(n);
	return 0;
}
