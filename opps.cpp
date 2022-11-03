#include<iostream>
using namespace std;

class student {
    public:
    student(){
        cout<<"Default Constructor invoked"<<endl;
    }
    int roll;
    string name;
    //prarametrised constructor
    student(int i,string n) {
        roll = i;
        name = n;
    }
    

    void insert(int n,string s)
    {
        roll = n;
        name = s;
    }
    void display() {
        cout<<roll<<" "<<name<<endl;
    }
    ~student(){
        cout<<"Destructor is called "<<endl;
    }
};

int main()
{
    student s1; // object creation of student s1
    student s2; // object creation of student s2
    s1.insert(1,"ravikant");
    s2.insert(1,"Sanjeev");
    student s3(4,"nitesh");

    s1.display();
    s2.display();
    s3.display();

    cout<<s1.name<<endl;

    return 0;
} 
