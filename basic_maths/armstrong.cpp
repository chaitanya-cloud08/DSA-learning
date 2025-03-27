#include<bits/stdc++.h>
using namespace std;

 bool IsArmstrong(int n)
{
	int temp = n;
	int cnt = 0;
	int sum = 0;
    int original = n;

while(temp>0)
{
	cnt++;
	temp= temp/10;
}

while(n>0)
{
	int ld = n%10;
	sum +=pow(ld,cnt);
	n=n/10;
}

if(sum==original)
{
	return "true";
}

else 
{
	return "false";
}
}


int main()
{
	int n;
	cout<<"Enter n:"<<" ";
	cin>>n;
	cout<<IsArmstrong(n);
	return 0;
}
