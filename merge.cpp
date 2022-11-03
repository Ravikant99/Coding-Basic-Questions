#include<bits/stdc++.h>
using namespace std;

//Divide and Conquer paradigm. 
//array is initially divided into two equal halves and 
//then they are combined in a sorted manner
// time complexity: best: O(nlogn) ;   avg: O(nlogn) ; worst: O(nlogn)  -- space: O(n)

// function to merge subaaray of a[]
void merge(int arr[],int s,int e){
    int mid = (s+e)/2;

    int len1 = mid - s+1;
    int len2 = e-mid;

    int first[len1],second[len2]; // temporary array

    //copy data to temp arrays
    int mainarrayIndex = s;
    for(int i = 0; i<len1;i++){
        first[i] = arr[mainarrayIndex++];
    }
    mainarrayIndex = mid+1;
     for(int i = 0; i<len2;i++){
        second[i] = arr[mainarrayIndex++];
    }
    //merge
    int index1 = 0;
    int index2 = 0;
    mainarrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1]<second[index2]){
            arr[mainarrayIndex++] = first[index1++];
        }
        else{
            arr[mainarrayIndex++] = second[index2++];
        }
    }
    while(index1 < len1){
        arr[mainarrayIndex++] = first[index1++];
    }
    while (index2 <len2)
    {
        arr[mainarrayIndex++] = second[index2++];
    }
    
}

void mergeSort(int arr[],int s,int e){
    //base case
    if(s>=e) {
        return;
    }
    int mid = (s+e)/2;
    //left part sort
    mergeSort(arr,s,mid);

    //right part sort
    mergeSort(arr,mid+1,e);

    //merge
    merge(arr,s,e);
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
    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}