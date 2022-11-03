#include<bits/stdc++.h>
using namespace std;

/*
//function overriding  or runtime polymorphism
class Animal
{
    public:
    void eat() 
    {
        cout<<"Eating...";
    }

};
class Dog: public Animal 
{
    public:
    void eat() 
    {
        cout<<"Eating bread..";
    }
};

*/


// function overloading or compile time polymorphism
class Sum {
    public:
      int add(int a,int b){
        return a+b;
      }
      int add(int a,int b,int c){
        return a+b+c;
      }
};
int main()
{
    //Dog d = Dog();
    //d.eat();

    Sum s1;
    cout<<s1.add(2,5)<<endl;
    cout<<s1.add(2,5,7)<<endl;

 return 0;
}