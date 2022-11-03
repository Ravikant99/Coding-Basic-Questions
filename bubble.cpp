#include<bits/stdc++.h>
using namespace std;

//works by repeatedly swapping the adjacent elements if they are in the wrong order. 
//This algorithm is not suitable for large data sets as its average and 
//worst-case time complexity is quite high.
// Complexity : best: O(n) ; avg: O(n2) ; worst: O(n2) ---space: O(1)

void bubbleSort(int arr[],int n) {
    
    // for(int i = 0;i<n;i++){
    //     for(int j=0;j<n-i;j++){
    //         if(arr[j]>arr[j+1])
    //             swap(arr[j],arr[j+1]);
    //     }
    // }

    if(n == 0 || n == 1) return;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > arr[i+1]) {
            swap(arr[i+1],arr[i]);
        }
    }
    bubbleSort(arr,n-1);
}

int main()
{
int n;
    cout<<"Enter no of element in array: ";
    cin>>n;
    int arr[n]={};
    cout<<"Enter element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}