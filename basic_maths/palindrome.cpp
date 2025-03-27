#include<bits/stdc++.h>
using namespace std;


bool isPalindrome(int n)
{
	int org = n;
	int revNum = 0;
	while(n>0)
	{
		int ld = n%10;
		revNum = (revNum*10) + ld;
		n = n/10;
	}
	if(revNum == org) 
	{
		return 1;
	}
	
	else {
		return 0;
	}
}

int main()
{
	int n;
	cout<<"Enter n:"<<" ";
	cin>>n;
	cout<<isPalindrome(n);
	return 0;
}
