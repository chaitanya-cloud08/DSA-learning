#include<bits/stdc++.h>
using namespace std;

int func(int n){
   
   if(n==0)
   {
   	return 1;
   }
   
   else {
    return n*func(n-1);
    }
}

int main(){
  
  int n;
  cout<<"enter n:";
  cin>>n;
  func(n);
  return 0;

}
