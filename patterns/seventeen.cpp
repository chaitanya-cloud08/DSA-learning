#include<iostream>
using namespace std;


void star (int n)
{

for (int i=0;i<=n;i++)
{
char ch = 'A';
int breakpoint = ((2*i)+1/2);	
	for (int j=0;j<=n-i-1;j++)
	{
		cout<<" ";
	}
	
	for (int j=0;j<=2*i+1;j++)
	{
		cout<<ch;
		if(j<=breakpoint) 
		ch++;
		else ch--;
		
	}
	
	
	
	for (int j=0;j<=n-i-1;j++)
	{
		cout<<" ";
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
