#include<bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	cout<<"enter string:";
	cin>>s;
	
	
	int hash[256] = {0}; // for string containing both uppercase and lowercase characters
	//for only lower case characters, we use hash[26]
	for(int i =0; i<s.size();i++)
	{
		hash[s[i]] ++; //for both characters
			//for only lower case characters, we use hash[s[i]-'a']

	}
	
	char query;
	cout<<"enter the char you want to know the occurrence of:";
	cin>>query;
	cout<<hash[query]<<endl;
	
	
	
	
}







