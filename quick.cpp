#include<bits/stdc++.h>
using namespace std;

//QuickSort is a Divide and Conquer algorithm. 
//It picks an element as a pivot and partitions 
//the given array around the picked pivot.

// time complexity: worst: O(n2)

int partition(int arr[],int low,int high) {
    int pivot = arr[low];

    int cnt = 0;
    for(int i = low+1;i<=high;i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }
    //place pivot at right position
    int pivotIndex = low + cnt;
    swap(arr[pivotIndex],arr[low]);

    //left and right path 
    int i = low ,j = high;
    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[],int low,int high){
    //base case
    if(low>=high)
        return;
    
    // partition 
    int p = partition(arr,low,high);
    //left part sort
    quickSort(arr,low,p-1);
    //right part sort
    quickSort(arr,p+1,high);
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
    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}