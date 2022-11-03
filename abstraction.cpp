#include<bits/stdc++.h>
using namespace std;

// Abstract class - way to acheive abstraction in c++.
class Sum 
{   
    private:
    int a , b ,c;
    public:
    void add() {
        cout<<"Enter any two number: ";
        cin>>a>>b;
        c = a+b;
        cout<<"Sum of two number is: "<<c<<endl;
    }
};

int main()
{
    Sum s;
    s.add();

 return 0;
}