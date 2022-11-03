#include<bits/stdc++.h>
using namespace std;

class khadensalgo
{
    public:
    long long maxSubarray(int arr[],int n) {
        int mx_sum = INT_MIN;
        int sum = 0;
        for(int i = 0 ; i < n ; i++) {
            sum += arr[i];
            mx_sum = max(mx_sum,sum);
            if(sum < 0)
            sum = 0;
        }
        return mx_sum;
    }
    
};

int main()
{


 return 0;
}

