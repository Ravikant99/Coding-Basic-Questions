#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList 
{
    Node* head;
    LinkedList() {
        head = NULL;
    }

void reverse() {
    Node* curr = head;
    Node* prev = NULL, *next = NULL;

    while(curr!=NULL) 
    {
        //store next element
        next=curr->next;
        //reverse current node's pointer
        curr->next = prev;
        // move pointer on position ahead
        prev = curr;
        curr = next;
    }
    head = prev;
}

// function to print linkedlist
void print() 
{
    struct Node* temp = head;

    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void push(int data)
{
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
};
int main()
{
  LinkedList ll;
  ll.push(20);
  ll.push(4);
  ll.push(15);
  ll.push(85);

  cout<<"Given linked list\n";
  ll.print();

  ll.reverse();
  cout<<"\nreverse linked list\n";
  ll.print();

 return 0;
}