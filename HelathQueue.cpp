#include <iostream>
#include <string>
#include <regex>
#include <limits>
using namespace std;

#define MAX 5 // Maximum size of the circular queue

// Structure for Patients
class Patient {
public:
    int patient_id;
    string name;
    string dob;
    string gender;
};

// Structure for Doctors
class Doctor {
public:
    int doctor_id;
    string name;
    string specialization;
};

// Circular Queue for Patients
class PatientQueue {
private:
    Patient patients[MAX];
    int front, rear, count;

public:
    PatientQueue() : front(0), rear(-1), count(0) {}

    bool isFull() { return count == MAX; }
    bool isEmpty() { return count == 0; }

    void enqueue(Patient p) {
        if (isFull()) {
            cout << "Queue is full! Cannot register more patients." << endl;
            return;
        }
        rear = (rear + 1) % MAX;
        patients[rear] = p;
        count++;
        cout << "Patient registered successfully!" << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "No patients registered yet!" << endl;
            return;
        }
        cout << "PATIENTS LIST" << endl;
        for (int i = 0, index = front; i < count; i++, index = (index + 1) % MAX) {
            cout << "ID: " << patients[index].patient_id << ", Name: " << patients[index].name
                 << ", DOB: " << patients[index].dob << ", Gender: " << patients[index].gender << endl;
        }
    }
};

// Circular Queue for Doctors
class DoctorQueue {
private:
    Doctor doctors[MAX];
    int front, rear, count;

public:
    DoctorQueue() : front(0), rear(-1), count(0) {}

    bool isFull() { return count == MAX; }
    bool isEmpty() { return count == 0; }

    void enqueue(Doctor d) {
        if (isFull()) {
            cout << "Queue is full! Cannot register more doctors." << endl;
            return;
        }
        rear = (rear + 1) % MAX;
        doctors[rear] = d;
        count++;
        cout << "Doctor registered successfully!" << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "No doctors registered yet!" << endl;
            return;
        }
        cout << "DOCTORS LIST" << endl;
        for (int i = 0, index = front; i < count; i++, index = (index + 1) % MAX) {
            cout << "ID: " << doctors[index].doctor_id << ", Name: " << doctors[index].name
                 << ", Specialization: " << doctors[index].specialization << endl;
        }
    }
};

// Function to validate date format (DD/MM/YY)
bool validateDateFormat(const string& date) {
    regex pattern("^\\d{2}/\\d{2}/\\d{2}$");
    if (!regex_match(date, pattern)) {
        cout << "Error: Invalid date format! Use DD/MM/YY." << endl;
        exit(1); // Terminate program
    }
    return true;
}

// Function to validate string input (no numbers allowed)
bool validateString(const string& input) {
    regex pattern("^[A-Za-z ]+$");
    if (!regex_match(input, pattern)) {
        cout << "Error: Invalid input! Only letters are allowed." << endl;
        exit(1);
    }
    return true;
}

void registerPatient(PatientQueue& pq) {
    if (pq.isFull()) {
        cout << "Patient queue is full! Cannot register more patients." << endl;
        return;
    }
    Patient p;
    cout << "PATIENT REGISTRATION" << endl;
    cout << "---------------------" << endl;
    cout << "ID: ";
    while (!(cin >> p.patient_id)) {
        cout << "Error: Invalid input! Please enter a valid number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cin.ignore();
    cout << "NAME: ";
    getline(cin, p.name);
    validateString(p.name);
    cout << "DoB (DD/MM/YY): ";
    cin >> p.dob;
    validateDateFormat(p.dob);
    cout << "GENDER: ";
    cin >> p.gender;
    validateString(p.gender);
    pq.enqueue(p);
}

void registerDoctor(DoctorQueue& dq) {
    if (dq.isFull()) {
        cout << "Doctor queue is full! Cannot register more doctors." << endl;
        return;
    }
    Doctor d;
    cout << "DOCTOR REGISTRATION" << endl;
    cout << "---------------------" << endl;
    cout << "ID: ";
    while (!(cin >> d.doctor_id)) {
        cout << "Error: Invalid input! Please enter a valid number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cin.ignore();
    cout << "NAME: ";
    getline(cin, d.name);
    validateString(d.name);
    cout << "SPECIALIZATION: ";
    getline(cin, d.specialization);
    validateString(d.specialization);
    dq.enqueue(d);
}

int main() {
    PatientQueue pq;
    DoctorQueue dq;
    int choice;
    do {
        cout << "Menu:" << endl;
        cout << "1. Register a Patient" << endl;
        cout << "2. Register a Doctor" << endl;
        cout << "3. Register an Appointment" << endl;
        cout << "4. Display Patients" << endl;
        cout << "5. Display Doctors" << endl;
        cout << "6. Display Appointments" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        while (!(cin >> choice)) {
            cout << "Error: Invalid input! Please enter a valid number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (choice) {
            case 1:
                registerPatient(pq);
                break;
            case 2:
                registerDoctor(dq);
                break;
            case 4:
                pq.display();
                break;
            case 5:
                dq.display();
                break;
            case 7:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;
    } while (choice != 7);

    return 0;
}

