#include <iostream>
using namespace std;

void star(int n) {
int spaces = 0;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
	if(i==0||j==0||i==n-1||j==n-1)
	{
		cout<<"*";
	}
	else {
		cout<<" ";
	}
}
cout<<endl;
}
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    star(n);
    return 0;
}

