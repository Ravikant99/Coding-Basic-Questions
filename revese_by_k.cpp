#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int k;
cin>>k;
for(int i=k;i<n+k;i++)
{
    cout<<a[i%n];
}
 return 0;
}