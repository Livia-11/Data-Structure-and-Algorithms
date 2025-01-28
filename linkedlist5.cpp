#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(){};
    Node(int d) {
     data = d;
     next = NULL;
    }
};
void display(Node* head) {
   while(head != NULL) {
    cout << head->data << "->";
    head = head->next;
   };
   cout<<"NULL"<<endl;
}
Node *addAtHead(Node *head,int data){
   Node *newNode = new Node(data);
   if(head == NULL){
      head = newNode;
   }else{
      newNode->next = head;
      head = newNode;
   }
   return head;
}

Node* addAtTail(Node *head, int data){
	 Node *newNode = new Node(data);
	 Node *temp = head;
   if(head == NULL){
      head = newNode;
   }else{
    while(head->next!=NULL){
    	head =head->next;
	}
	head->next=newNode;
   }
   return temp;	
}
int main(){
   Node *n1 = new Node();
   Node *n2 = new Node(20);
   Node *n3 = new Node(30);
   Node n4(40);
   n1 -> data = 15;
   n1 -> next = n2;
   n2 -> next = n3;
   n3 -> next = &n4;
   Node *head = addAtTail(n1,50);
   display(head);
   return 0;
}
