#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  
      cin>>n;
      if(n%5 !=0)
      {
          cout<<"-1"<<endl;
      }
      else
      {
          int x;
          x = n/10 +(n%10)/5;
          cout<<x<<endl;
      }
  
    return 0;
}