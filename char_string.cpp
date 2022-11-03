#include<bits/stdc++.h>
using namespace std;


int main()
{

    string arr[5]={"nitesh","arungy","sanjeev","shivank"};
    string str="ee";
    int lt=str.length();

    string s="";
    for(int i=0;i<5;i++)
    {
        s=arr[i];
       for(int j=0;j<arr[i].size();j++)
       {
        int l=j;
        int k=0;
        while(k<lt && s[l]==str[k] ){
          
            l++;
            k++;
        }
        if(k==lt) cout<<i<<endl;
       }
    }
 return 0;
}