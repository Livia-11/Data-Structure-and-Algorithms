#include <iostream>
using namespace std;
struct Queue{
int capacity;
int *queue;
int front;
int rear;
int size;
Queue(int cap){
  capacity = cap;
  front = rear =-1;
  size=0;
  queue = new int[capacity];
}
int count(){
    return size;
}
bool isEmpty(){
    return size == 0;
}
bool isFull(){
    return size == capacity;
}
void enqueue(int val){
    if(isFull()){
        cout << "Queue Full\n"<<endl;
        return;
    }
    else{
        if(isEmpty()){
            front = 0;
        }
        rear+=1;
        queue[rear] = val;
        size+=1;
    }
}
void dequeue(){
    if(isEmpty()){
        cout << "Queue Empty\n"<<endl;
        return;
    }
    cout<<"The removed element is "<<queue[front]<<endl;
    front++;
    size-=1;
}



void display(){
    if(front == -1){
        cout << "Queue Empty\n"<<endl;
    }
    for(int i=front; i<=rear; i++){
        cout<<"element at index "<<i <<"= " <<queue[i] << " "<<endl;
    }
}

void enqueue(int val){
	if(isFull()){
		int *newArray = new int[capacity*2];
		for(int j=0;j<capacity;j++){
			newArray[j]=queue[j];
		}
		delete [] queue;
		queue=newArray;
		capacity=capacity*2;
	}
	rear++;
	queue[rear]=val;
	size++;
}
int peek(){
    if(front==-1){
        cout<<"Queue is Empty"<<endl;
        return 0;
    }
    return queue[front];
}
};

int main() {
      Queue q(5);
    cout<<"Adding elements"<<endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<q.count()<<endl;
    q.enqueue(60);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    cout<<q.peek()<<endl;
    return 0;
}






















