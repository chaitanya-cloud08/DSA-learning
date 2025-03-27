#include<iostream>
using namespace std;


void star (int n)
{

for(int i=1;i<n;i++)
{
//	int breakpoint = ((2*i)+1/2);
	for(int j =1; j<n-i-1;j++)
	{
		cout<<"#";
	}
	
for(int j=1;j<(2*i+1/2);j++)
{
	cout<<j;
}
	for(int j=2*i+1; j>2*i+1/2;j--)
	{
		cout<<j;
	}
	
	
	
	for(int j =1; j<n-i-1;j++)
	{
		cout<<"#";
	}
	
	
	
	
	
	
	
	
	
	
	
	cout<<endl;
	
}

}

int main()
{
	int n;
	cout<<"Enter n";
	cin>>n;
	star(n);
	return 0;
	
}
