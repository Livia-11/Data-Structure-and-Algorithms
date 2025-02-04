#include<iostream>
using namespace std;

template<typename T>
class Node{
   public:
       T data;
       Node<T>* next;
       Node(T data){
         this->data = data;
         next = NULL;
       }
};

template<typename T>
class Queue{
    Node<T>* head;
    Node<T>* tail;
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
    bool isEmpty(){
       return size==0;
    }

