#include<bits/stdc++.h>
using namespace std;
//unordered_map will take less time complexity, worst case rarely happens  
//map always stores sorted value 
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
	map<int,int> mpp;
	for(int i =0;i<n;i++)
{
mpp[arr[i]]++;	
}
//iterate in the map 
for (map<int, int>::iterator it = mpp.begin(); it != mpp.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }
int query;
cout<<"Enter digit you want to find the occurence of:";
cin>>query;
//fetch
cout<<mpp[query]<<endl;	
	
	
	
	
	
	
	
	
	
}







