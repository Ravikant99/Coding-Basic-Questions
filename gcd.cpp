#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b) {
    int ans =1;
    int x = min(a,b);
    for (int i =x; i>=1 ; i--)
    {
       if(a%i==0 && b%i==0)
       {
            ans = i; 
            break;
       }
    }
   
    return ans;
}

int main()
{
  int a,b;
  cout<<"Enter two number to find gcd: ";
  cin>>a>>b;

  cout<<"gcd of "<<a <<" and "<<b<<" is: "<<gcd(a,b)<<endl;


 return 0;
}