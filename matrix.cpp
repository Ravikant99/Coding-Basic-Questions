#include<bits/stdc++.h>
using namespace std;

int main()
{
  int m;
  
  cout<<"Enter size of matrix: ";
  cin>>m;
  int arr[m][m];
 // taking input of 2d matrix
  for (int i = 0; i < m; i++)
  {
    for (int  j = 0; j < m; j++)
    {
        cin>>arr[i][j];
    }
    
  }
// printing output of 2d matrix
cout<<"-----Output of matrix----"<<endl;
  for (int i = 0; i < m; i++)
  {
    for (int  j = 0; j < m; j++)
    {
        cout<<arr[i][j]<<" ";
        
    }
    cout<<endl;
    
  }
  
 return 0;
}