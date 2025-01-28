#include <iostream>
#include <string>
using namespace std;

// Node structure for Patients
class Patient {
	public:
    int patient_id;
    string name;
    string dob;
    string gender;
    Patient* next;
};

// Node structure for Doctors
class Doctor {
	public:
    int doctor_id;
    string name;
    string specialization;
    Doctor* next;
};

// Node structure for Appointments
class Appointment {
	public:
    int appointment_id;
    int patient_id;
    int doctor_id;
    string appointment_date;
    Appointment* next;
};

// Head pointers for the linked lists
Patient* PatientsLL = nullptr;
Doctor* DoctorsLL = nullptr;
Appointment* AppointmentsLL = nullptr;

void registerPatient() {
    Patient* newPatient = new Patient;
    cout << "PATIENT REGISTRATION" << endl;
    cout << "---------------------" <<endl;
    cout << "ID: ";
    cin >> newPatient->patient_id;

    // Check for duplicate ID
    Patient* temp = PatientsLL;
    while (temp != nullptr) {
        if (temp->patient_id == newPatient->patient_id) {
            cout << "Patient ID already exists!" << endl;
            delete newPatient;
            return;
        }
        temp = temp->next;
    }

    cout << "NAME: ";
    cin.ignore();
    getline(cin, newPatient->name);
    cout << "DoB: ";
    cin >> newPatient->dob;
    cout << "GENDER: ";
    cin >> newPatient->gender;

    newPatient->next = PatientsLL;
    PatientsLL = newPatient;
    cout << "Patient registered successfully!" << endl;
}

void registerDoctor() {
    Doctor* newDoctor = new Doctor;
    cout << "DOCTOR REGISTRATION" << endl;
    cout << "---------------------" <<endl;
    cout << "ID: ";
    cin >> newDoctor->doctor_id;

    // Check for duplicate ID
    Doctor* temp = DoctorsLL;
    while (temp != nullptr) {
        if (temp->doctor_id == newDoctor->doctor_id) {
            cout << "Doctor ID already exists!" << endl;
            delete newDoctor;
            return;
        }
        temp = temp->next;
    }

    cout << "NAME: ";
    cin.ignore();
    getline(cin, newDoctor->name);
    cout << "SPECIALIZATION: ";
    getline(cin, newDoctor->specialization);

    newDoctor->next = DoctorsLL;
    DoctorsLL = newDoctor;
    cout << "Doctor registered successfully!" << endl;
}

void registerAppointment() {
    Appointment* newAppointment = new Appointment;
    cout << "APPOINTMENT REGISTRATION" << endl;
    cout << "---------------------" <<endl;
    cout << "ID: ";
    cin >> newAppointment->appointment_id;

    // Check for duplicate ID
    Appointment* temp = AppointmentsLL;
    while (temp != nullptr) {
        if (temp->appointment_id == newAppointment->appointment_id) {
            cout << "Appointment ID already exists!" << endl;
            delete newAppointment;
            return;
        }
        temp = temp->next;
    }

    cout << "P_ID: ";
    cin >> newAppointment->patient_id;
    cout << "D_ID: ";
    cin >> newAppointment->doctor_id;

    // Check if patient and doctor exist
    Patient* patientTemp = PatientsLL;
    Doctor* doctorTemp = DoctorsLL;

    bool patientExists = false, doctorExists = false;
    while (patientTemp != nullptr) {
        if (patientTemp->patient_id == newAppointment->patient_id) {
            patientExists = true;
            break;
        }
        patientTemp = patientTemp->next;
    }

    while (doctorTemp != nullptr) {
        if (doctorTemp->doctor_id == newAppointment->doctor_id) {
            doctorExists = true;
            break;
        }
        doctorTemp = doctorTemp->next;
    }

    if (!patientExists) {
        cout << "Patient ID does not exist!" << endl;
        delete newAppointment;
        return;
    }
    if (!doctorExists) {
        cout << "Doctor ID does not exist!" << endl;
        delete newAppointment;
        return;
    }

    cout << "DATE: ";
    cin >> newAppointment->appointment_date;

    newAppointment->next = AppointmentsLL;
    AppointmentsLL = newAppointment;
    cout << "Appointment registered successfully!" << endl;
}

void displayPatients() {
    cout << "PATIENTS LIST" << endl;
    Patient* temp = PatientsLL;
    while (temp != nullptr) {
        cout << "Patient ID: " << temp->patient_id << ", Name: " << temp->name
             << ", DOB: " << temp->dob << ", Gender: " << temp->gender << endl;
        temp = temp->next;
    }
}

void displayDoctors() {
    cout << "DOCTORS LIST" << endl;
    Doctor* temp = DoctorsLL;
    while (temp != nullptr) {
        cout << "Doctor ID: " << temp->doctor_id << ", Name: " << temp->name
             << ", Specialization: " << temp->specialization << endl;
        temp = temp->next;
    }
}

void displayAppointments() {
    cout << "APPOINTMENTS LIST" << endl;
    Appointment* temp = AppointmentsLL;
    while (temp != nullptr) {
        cout << "Appointment ID: " << temp->appointment_id
             << ", P_ID: " << temp->patient_id
             << ", D_ID: " << temp->doctor_id
             << ", Date: " << temp->appointment_date << endl;
        temp = temp->next;
    }
}

int main() {
    int choice;
    do {
        // Display menu
        cout << "Menu:" << endl;
        cout << "1. Register a Patient" << endl;
        cout << "2. Register a Doctor" << endl;
        cout << "3. Register an Appointment" << endl;
        cout << "4. Display Patients" << endl;
        cout << "5. Display Doctors" << endl;
        cout << "6. Display Appointments" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Handle menu choice
        switch (choice) {
            case 1:
                registerPatient();
                break;
            case 2:
                registerDoctor();
                break;
            case 3:
                registerAppointment();
                break;
            case 4:
                displayPatients();
                break;
            case 5:
                displayDoctors();
                break;
            case 6:
                displayAppointments();
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



