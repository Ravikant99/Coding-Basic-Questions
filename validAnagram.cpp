#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        unordered_map<char,int> mp1,mp2;
        int sz=s.size();
        int tz=t.size();
        int n = max(sz,tz);
        for(int i=0;i<n;i++)
        {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        if(mp1==mp2) return true;
        return false;
    }

int main()
{
    string s,t;
    cin>> s>> t;
   // Function Call
    if (isAnagram(s, t))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each "
                "other";

 return 0;
}

