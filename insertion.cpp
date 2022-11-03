#include<bits/stdc++.h>
using namespace std;

// array is virtually splitted into sorted and unsorted part
// value form unsorted array picked up and place at correct position in sorted array
// Complexity : Best- O(n) ; Average: O(n2) ;Worst : O(n2)   ;   Space : O(1)

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1] = temp; 
    }
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
    insertionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}