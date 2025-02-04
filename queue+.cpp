#include<iostream>
using namespace std;
class Node{
   public:
       int data;
       Node* next;
       Node(int x){
         this->data = x;
         next = NULL;
       }
};

class Queue{
    Node* head;
    Node* tail;
    int size;

  public:
    Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    int getSize(){
       return size;
    }
 int count(){
       …;
    }
    bool isEmpty(){
       return size==0;
    }
void enqueue(int ele){
       Node* n = new Node(ele);
       if(head==NULL){
        head = n;
        tail = n;
       }else{
         tail->next = n;
         tail = n;
       }
       size++;
    }

