#include<bits/stdc++.h>
using namespace std;

class father 
{
    public:
     father() {
        cout<<"Sharma ";
    }
};
class son:public father
{
    public:
    son() {
        cout<<"Ravikant";
    }
};

int main()
{
  son r; // on bject declaration son inherit the properties of father

 return 0;
}