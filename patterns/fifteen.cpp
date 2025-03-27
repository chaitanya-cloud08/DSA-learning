#include<iostream>
using namespace std;


void star (int n)
{
for(int i=n;i>=1;i--)
{
	for(char ch='A';ch<='A'+i;ch++)
	{
		cout<<ch<<' ';
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
