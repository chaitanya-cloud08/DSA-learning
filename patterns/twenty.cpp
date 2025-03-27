#include <iostream>
using namespace std;

void star(int n) {
	int spaces = 2*n-2;
  for(int i=1;i<=2*n-1;i++)
  {
  	int stars = i;
  	if(i>n) stars = 2*n-i;
  	
  	for(int j =0;j<stars;j++)
  	{
  		cout<<"*";
	  }
  	
  	for(int j =0;j<spaces;j++)
  	{
  		cout<<" ";
	  }
  	
  	for(int j =0;j<stars;j++)
  	{
  		cout<<"*";
	  }
	  
	  
	 if(i<n) spaces-=2;
	 spaces+=2;
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

