#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class CircularQueue {
private:
    Node* front;
    Node* rear;
public:
    CircularQueue() : front(nullptr), rear(nullptr) {}

    void enqueue(int value) {
        Node* newNode = new Node{value, nullptr};
        if (!front) {
            front = rear = newNode;
            rear->next = front;
        } else {
            rear->next = newNode;
            rear = newNode;
            rear->next = front;
        }
    }

    void dequeue() {
        if (!front) {
            cout << "Queue is empty!\n";
            return;
        }
        if (front == rear) {
            delete front;
            front = rear = nullptr;
        } else {
            Node* temp = front;
            front = front->next;
            rear->next = front;
            delete temp;
        }
    }

    void display() {
        if (!front) {
            cout << "Queue is empty!\n";
            return;
        }
        Node* temp = front;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != front);
        cout << "(Front)\n";
    }
};




//Person Priority

struct Student {
    int code;
    string name;
    int age;
};

struct StudentNode {
    Student data;
    StudentNode* next;
};

class PriorityQueue {
private:
    StudentNode* front;
public:
    PriorityQueue() : front(nullptr) {}

    void enqueue(int code, string name, int age) {
        StudentNode* newNode = new StudentNode{{code, name, age}, nullptr};
        if (!front || age > front->data.age) {
            newNode->next = front;
            front = newNode;
        } else {
            StudentNode* temp = front;
            while (temp->next && temp->next->data.age >= age) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void dequeue() {
        if (!front) {
            cout << "Queue is empty!\n";
            return;
        }
        StudentNode* temp = front;
        front = front->next;
        delete temp;
    }

    void display() {
        if (!front) {
            cout << "Queue is empty!\n";
            return;
        }
        StudentNode* temp = front;
        while (temp) {
            cout << "Code: " << temp->data.code << ", Name: " << temp->data.name << ", Age: " << temp->data.age << "\n";
            temp = temp->next;
        }
    }
};

int main() {
    CircularQueue cq;
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.display();
    cq.dequeue();
    cq.display();
    
    PriorityQueue pq;
    pq.enqueue(1, "Alice", 25);
    pq.enqueue(2, "Bob", 22);
    pq.enqueue(3, "Charlie", 30);
    pq.display();
    pq.dequeue();
    pq.display();
    
    return 0;
}

