#include<iostream>
using namespace std;

class Student{
    private:
           int rollNo;
           string Name;
           int mathMarks;
           int phyMarks;
           int chemMarks;
    public:
    Student(int r,string n,int m,int p,int c){
        rollNo=r;
        Name=n;
        mathMarks=m;
        phyMarks=p;
        chemMarks=c;
    }
    int totalMarks(){
        return mathMarks+phyMarks+chemMarks;
    }
    char grade(){
        float average=totalMarks()/3;
        if(average>60)
        return 'A';
        else if(average>40 && average<60)
        return 'B';
        else
        return 'C';

    }
};

int main(){
    int roll;
    string Name;
    int m,p,c;
    cout<<"Enter roll no of a student: ";
     cin>>roll;
     cout<<"Enter name of a student: ";
     cin>>Name;
     cout<<"Enter marks in three subject: ";
     cin>>m>>p>>c;
     Student s(roll,Name,m,p,c);
     cout<<"Total Marks: "<<s.totalMarks()<<endl;
     cout<<" Grade of the student: "<<s.grade()<<endl;

     

}
