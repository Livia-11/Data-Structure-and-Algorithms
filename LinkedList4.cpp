#include <iostream>
using namespace std;

class Student {
public:
    int code;
    string name;
    string school;
    int age;
    Student* next; // Pointer to the next Student in the list

    // Default constructor
    Student(){}

    // Parameterized constructor
Student(int c, string nm, string sch, int a){
			code=c;
			name=nm;
			school=sch;
			age=a;
		}};

// Function to display the linked list
void display(Student* head) {
    while (head != NULL) {
        cout << head->code << " " << head->name << " " << head->school << " " << head->age << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create Student nodes
    Student* s1 = new Student(10, "livia", "RCA", 16);
    Student* s2 = new Student(14, "livi", "RCAA", 13);
    Student* s3 = new Student(11, "liva", "RCAD", 14);

    // Link the nodes
    s1->next = s2;
    s2->next = s3;

    // Display the linked list
    display(s1);
    return 0;
}

