#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void printlist(Node *n) 
{
    while(n!=0) {
        cout<<n->data <<" ";
        n = n->next;
    }
}


int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // while(head!=0){
    //     cout<<head->data<<" ";
    //     head = head->next;
    // }

    printlist(head);

 return 0;
}