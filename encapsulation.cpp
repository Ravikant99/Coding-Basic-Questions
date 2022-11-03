#include<bits/stdc++.h>
using namespace std;

class company {
    int salary;
    public:
    // setter function
     void setSalary(int fulltime,int overtime) {
        salary = fulltime + overtime;
     }
     // getter function
     int getSalary() {
        return salary;
     }
};

int main()
{
    company raj;
    raj.setSalary(5000,2000);
    cout<<raj.getSalary();

 return 0;
}