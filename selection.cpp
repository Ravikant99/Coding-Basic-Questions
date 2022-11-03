#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        // swap(arr[minIndex],arr[i]);
        if(minIndex != i) {
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{
    int n;
    
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n]={};
    cout<<"Enter element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);

    cout<<"Sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}