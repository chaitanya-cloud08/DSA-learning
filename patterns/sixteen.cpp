#include<iostream>
using namespace std;


void star (int n)
{
	int num = 65;
for(int i=0;i<=n;i++)
{
for( int j=0;j<=i;j++)
{
	cout<<(char)(num+i);
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
