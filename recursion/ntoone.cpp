#include<bits/stdc++.h>
using namespace std;

 void print(int n)
{
	int i=n;
	if(i<0) return;
	cout<<i<<endl;
	i--;
	print(n-1);
}


int main()
{
	int n;
	cout<<"Enter n:"<<" ";
	cin>>n;
	print(n);
	return 0;
}
