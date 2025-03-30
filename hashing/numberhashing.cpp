#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n; 
	cout<<"Enter length of array:";
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
	}
	//precompute
	int hash[n+1] = {0};
	for(int i =0;i<n;i++)
{
hash[arr[i]]+=1;	
}

int query;
cout<<"Enter digit you want to find the occurence of:";
cin>>query;
//fetch
cout<<hash[query]<<endl;	
	
	
	
	
	
	
	
	
	
}







