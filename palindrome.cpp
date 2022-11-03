#include <bits/stdc++.h>
using namespace std;
string isPalindrome(string S)
{
    // Iterate over the range [0, N/2]
    for (int i = 0; i < S.length() / 2; i++) {
        if (S[i] != S[S.length() - i - 1]) {
            return "No";
        }
    }
    return "Yes";
}
 
int main()
{
    string S = "ABCDCBA";
    cout << isPalindrome(S);
 
    return 0;
}
