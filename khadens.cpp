#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums,int n) {  
        // using khadens algroritm
        int sum = 0;
        int mx = INT_MIN;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            mx = max(sum,mx);
            if(sum < 0) sum =0;
        }
        return mx;
    }

int main()
{
    int n;
    cout<<"enter no of element in array: ";
    cin>>n;
    int nums[] = {};
    cout<<"enter element of array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> v;
    for(int i =0;i<n;i++){
        v[nums[i]++];
    }
    int max_sum = maxSubArray(v,n);
    cout << "Maximum contiguous sum is " << max_sum;

 return 0;
}

