#include<iostream>
using namespace std;


void star (int n)
{
for(int i =n;i>=1;i--)
{
	for(int j =1;j<=i;j++)
	{
		cout<<j;
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
