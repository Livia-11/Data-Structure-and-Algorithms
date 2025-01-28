#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int dt){
			data=dt;
			next=NULL;
		}
};

Node* deleteAtBeginning(Node* head){
	if(head == NULL){
		return head;
	}
    Node* temp = head;
	head = head->next;
	temp->next = NULL;
	delete temp;
	return head;	
}

Node* deleteAtEnd(Node* head){
	Node* temp = head;
	Node* SecondLast = head;
	while(SecondLast->next->next!=NULL){
		SecondLast = SecondLast->next;
	}
	delete SecondLast;
	SecondLast->next= NULL;
	return temp;
}

Node* reverse(Node* head){
	Node* prev = NULL;
	Node* curr = NULL;
	Node* nextNode = NULL;
	
	while(curr!=NULL){
		nextNode =curr->next;
		curr -> next=prev;
		prev= curr;
		curr = nextNode;
	}
	return prev;
}

void display(Node* head){
 Node* temp=head;
 while(temp!=NULL){
 	cout<<temp->data<<" ";
 	temp = temp->next;
	  }
	  cout<<endl;
}

int main(){
	Node *n1 = new Node(50);
	Node *n2 = new Node(15);
	Node *n3 = new Node(30);
	Node *n4 = new Node(27);
	Node *n5 = new Node(40);
	
	n1 ->next = n2;
	n2 ->next = n3;
	n3 ->next = n4;
	n4 ->next = n5;
	n5 ->next = NULL;
	
	display(n1);
	n1 = reverse(n1);
	display(n1);
}
