#include<bits/stdc++.h>
using namespace std;

int main()
{
   string arr[5] = { "Ravi","kant","Sanjeev","Raj","Abhi"};
  string s = "Raj";
  
  for (int i = 0; i < 5; i++) {
    if(arr[i]==s) cout<< i <<endl;
  }

 return 0;
}